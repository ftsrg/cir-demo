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

#include "Handlers.h"
#include "handlers/HandlerModule.h"

namespace cir2c {

void registerBuiltinHandlers(Mapper &m) {
  // Apply every self-registered handler family (REGISTER_HANDLER_MODULE).
  for (HandlerModule *mod : handlerModuleRegistry())
    mod->registerHandlers(m);
}

} // namespace cir2c
