git submodule init
git submodule update
third-party\gyp\gyp --depth=. DSLibrary.sln
msbuild DSLibrary.sln
