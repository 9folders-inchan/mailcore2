// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MailCore2",
    platforms: [
        .iOS(.v9), .macOS(.v10_10)
    ],
    products: [
        .library(
            name: "MailCore2",
            targets: ["MailCore2"]),
    ],
    targets: [
        .binaryTarget(name: "MailCore2",
                      url: "https://github.com/mattmaddux/mailcore2/raw/master/bin/MailCore2-2024-04-29.xcframework.zip",
                      checksum: "46f23db6698a9d5112052e0c12f5e5b3745b7eea415e966f950465dc5b4a20e8")
    ]
)
