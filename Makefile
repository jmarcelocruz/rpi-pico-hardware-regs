# Copyright 2024 José Marcelo Marques da Cruz
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

VERSION_MAJOR = 1
VERSION_MINOR = 0
VERSION_PATCH = 1

dist: rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}.tar.gz
rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}.tar.gz: $(shell find include/ -type f) LICENSE
	mkdir -p rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}/licenses/
	cp -a include/ rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}/
	cp -a LICENSE rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}/licenses/
	tar -cv rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}/ | gzip > $@
	rm -r rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}/

.PHONY: clean
clean:
	rm -f rpi-pico-hardware-regs-${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}.tar.gz
