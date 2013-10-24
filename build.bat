git submodule init
git submodule update
set PATH=C:\python27;%PATH%
where python
REM third-party\gyp\gyp.bat --depth=. DSLibrary.gyp
dir
.\third-party\gyp\gyp --depth=. -G msvs_version=2010e DSLibrary.gyp
dir
msbuild DSLibrary.sln
Debug\dslibrary.exe
