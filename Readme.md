Dependencies: See meson.build

Expected: libopenvr_api.so in /usr/lib. Add dirs to find_library for other paths.

```
meson build
ninja -C build
cd bowlingvr # directory with models/ etc.
../build/bowlingvr
```
