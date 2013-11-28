{
    "variables": {
        "build_mode%": "static_library"
    },

    "target_defaults": {
        "default_configuration": "Release",
        "configurations": {
            "Debug": {
                "conditions": [
                    [
                    "build_mode=='shared_library'", {
                        "cflags": ["-Wall", "-g", "-fPIC"]
                    }]
                ]
            },
            "Release": {
                "cflags": ["-Wall"]
            }
        }
    },

    "targets": [
        {
            "target_name": "libds",
            "type": "<(build_mode)",
            "sources": [
                "src/base/String.cpp",
                "src/container/Vector.cpp",
                "src/utils/BitSet.cpp"
            ]
        },
        {
            "target_name": "unitTestRunner",
            "type": "executable",
            "dependencies": [
                "libds"
            ],
            "sources": [
                "third-party/googletest/src/gtest-all.cc",
                "third-party/googletest/src/gtest_main.cc",
                "tests/BitSet_test.cpp",
                "tests/String_test.cpp",
                "tests/Tree_test.cpp",
                "tests/TreeNode_test.cpp"
            ],
            "include_dirs": [
                "src",
                "third-party/googletest",
                "third-party/googletest/include"
            ],
            "ldflags": [
                "-pthread"
            ]
        }
    ]
}
