/*
 * Copyright 2026 LLVM Project
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

/* PR opt/10011 */
/* This is link test for builtin_constant_p simplification + DCE.  */

extern void link_error(void);
static void usb_hub_port_wait_reset(unsigned int delay)
{
        int delay_time;
        for (delay_time = 0; delay_time < 500; delay_time += delay) {
                if (__builtin_constant_p(delay))
                        link_error();
        }
}

int main() { return 0; }
