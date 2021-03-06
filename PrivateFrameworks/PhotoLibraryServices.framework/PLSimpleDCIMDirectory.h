/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSFileManager, NSString, NSMutableIndexSet, NSURL;

@interface PLSimpleDCIMDirectory : NSObject  {
    NSURL *_baseURL;
    NSString *_subDirSuffix;
    unsigned int _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    unsigned int _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    BOOL _hasLoadedUserInfo;
    BOOL _representsCameraRoll;
    struct dispatch_queue_s { } *_isolation;
}

@property(readonly) NSURL * currentSubDirectory;
@property BOOL representsCameraRoll;

+ (id)migrateOldPlistToNewPlist:(id)arg1;
+ (id)cameraRollPlistName;

- (id)init;
- (void)dealloc;
- (id)availableFileNameNumbersInDirNumber:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })fileNameNumberRangeForDirNumber:(unsigned int)arg1;
- (id)subDirURLForNumber:(unsigned int)arg1 create:(BOOL)arg2 didCreate:(BOOL*)arg3;
- (void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2;
- (BOOL)representsCameraRoll;
- (void)_saveUserInfo;
- (id)currentSubDirectory;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (void)setRepresentsCameraRoll:(BOOL)arg1;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned int)arg3 userInfoPath:(id)arg4;

@end
