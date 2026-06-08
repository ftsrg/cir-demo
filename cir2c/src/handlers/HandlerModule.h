/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <vector>

namespace cir2c {

class Mapper;

/// Interface implemented by each self-registering handler family. A family
/// owns all handlers for a related group of CIR ops and registers them via
/// registerHandlers().
class HandlerModule {
public:
  virtual ~HandlerModule() = default;
  /// Register all op handlers owned by this family into the mapper.
  virtual void registerHandlers(Mapper &m) = 0;
};

/// Global registry of handler-family singletons, populated at static-init time
/// by REGISTER_HANDLER_MODULE. A function-local static avoids the static
/// initialization-order fiasco. The pointers are owned for the process
/// lifetime and never freed.
std::vector<HandlerModule *> &handlerModuleRegistry();

/// Registrar whose constructor adds one module instance to the global registry.
template <typename T> struct HandlerModuleRegistrar {
  HandlerModuleRegistrar() { handlerModuleRegistry().push_back(new T()); }
};

} // namespace cir2c

/// Place at file scope in a family .cpp to self-register that family. The
/// family's translation unit is linked directly into the cir2c executable (all
/// sources are listed in add_executable), so the registrar's constructor runs
/// at startup and is never stripped by the linker.
#define REGISTER_HANDLER_MODULE(ClassName) \
  static ::cir2c::HandlerModuleRegistrar<ClassName> ClassName##_cir2c_registrar_;
