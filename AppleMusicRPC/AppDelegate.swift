//
//  AppDelegate.swift
//  AppleMusicRPC
//

import Cocoa

class AppDelegate: NSObject, NSApplicationDelegate {
    func applicationDidFinishLaunching(_ aNotification: Notification) {
        // Insert code here to initialize your application
        StatusItemManager.shared.setup()
        NowPlayingManager.shared.setup()
    }
}
