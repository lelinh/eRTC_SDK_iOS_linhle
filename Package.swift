// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "RipSDK",
    products: [
        .library(
            name: "RipSDK",
            targets: ["eRTC","_25519"]),
    ],
    targets: [
        .binaryTarget(name: "eRTC",
                      path: "Frameworks/eRTC.xcframework"),
        .binaryTarget(name: "_25519",
                      path: "Frameworks/_25519.xcframework"),
    ]
    
)
