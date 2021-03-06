//
//  NSUserDefaults+SickBeard.h
//  SickBeard
//
//  Created by Colin Humber on 8/30/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SBServer;
@class SBRootDirectory;

extern NSString *const SBDefaultsRegisteredKey;

extern NSString *const SBServerHasBeenSetupKey;
extern NSString *const SBServerKey;
extern NSString *const SBTemporaryServerKey;
extern NSString *const SBDefaultDirectoriesKey;
extern NSString *const SBShouldUpdateShowList;

extern NSString *const SBInitialQualitiesKey;
extern NSString *const SBArchiveQualitiesKey;
extern NSString *const SBUseSeasonFoldersKey;
extern NSString *const SBStatusKey;


@interface NSUserDefaults (SickBeard)

@property (getter=getDefaultsRegistered, setter=setDefaultsRegistered:) BOOL defaultsRegistered;

@property (getter=getServerHasBeenSetup, setter=setServerHasBeenSetup:) BOOL serverHasBeenSetup;
@property (weak, getter=getServer, setter=setServer:) SBServer *server;
@property (weak, getter=getTemporaryServer, setter=setTemporaryServer:) SBServer *temporaryServer;
@property (getter=getShouldUpdateShowList, setter=setShouldUpdateShowList:) BOOL shouldUpdateShowList;

@property (weak, getter=getDefaultDirectories, setter=setDefaultDirectories:) NSMutableArray *defaultDirectories;
@property (readonly) SBRootDirectory *defaultDirectory;
@property (weak, getter=getInitialQualities, setter=setInitialQualities:) NSMutableArray *initialQualities;
@property (weak, getter=getArchiveQualities, setter=setArchiveQualities:) NSMutableArray *archiveQualities;
@property (weak, getter=getStatus, setter=setStatus:) NSString *status;
@property (getter=getUseSeasonFolders, setter=setUseSeasonFolders:) BOOL useSeasonFolders;


@end
