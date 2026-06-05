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

	int main(void)
	{
		float reale = 1.0f;
		float oneplus;
		int i;

		if (sizeof (float) != 4)
		  exit (0);

		for (i = 0; ; i++)
		{
			oneplus = 1.0f + reale;
			if (oneplus == 1.0f)
				break;
			reale=reale/2.0f;
		}
		/* Assumes ieee754 accurate arithmetic above.  */
		if (i != 24)
		  abort ();
		else
		  exit (0);
	}
