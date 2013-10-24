git submodule init
git submodule update
where python
REM third-party\gyp\gyp.bat --depth=. DSLibrary.gyp
.\third-party\gyp\gyp --depth=. -G msvs_version=2010e DSLibrary.gyp
msbuild DSLibrary.sln
Debug\dslibrary.exe
