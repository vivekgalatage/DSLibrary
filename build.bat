git submodule init
git submodule update
msbuild %MSBuildLogger%\my-msbuild-log.xml DSLibrary.sln
Debug\dslibrary.exe
