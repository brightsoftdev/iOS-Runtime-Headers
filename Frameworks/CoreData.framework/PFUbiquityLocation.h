/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, PFUbiquityLocation;

@interface PFUbiquityLocation : NSObject  {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    unsigned int _hash;
}

@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) BOOL usesStagingLogDirectory;
@property(readonly) BOOL usesTemporaryLogDirectory;
@property(readonly) BOOL usesCurrentBaselineDirectory;
@property(readonly) BOOL usesBaselineDirectory;
@property(readonly) NSArray * otherPathComponents;
@property(readonly) unsigned int hash;
@property(readonly) NSString * filename;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSString * storeName;
@property(readonly) NSString * exportingPeerID;
@property(readonly) int ubiquityLocationType;
@property(readonly) NSString * ubiquityRootLocationPath;

+ (id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2;
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3;
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1;
+ (BOOL)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2;
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2;
+ (id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 forFileNamed:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2;
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5;
+ (id)createUbiquityLocationForRootURL:(id)arg1;
+ (id)createMetadataStoreLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2;
+ (id)createVersionHashStringForModel:(id)arg1;

- (BOOL)usesStagingLogDirectory;
- (BOOL)usesTemporaryLogDirectory;
- (BOOL)isEqualToURL:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;
- (void)setModelVersionHash:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setOtherPathComponents:(id)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (void)setHash:(unsigned int)arg1;
- (id)otherPathComponents;
- (void)updateHash;
- (id)initWithUbiquityRootURL:(id)arg1;
- (BOOL)fileExistsAtLocation;
- (id)initWithUbiquityRootPath:(id)arg1;
- (id)createFullPath;
- (BOOL)usesCurrentBaselineDirectory;
- (BOOL)usesBaselineDirectory;
- (id)modelVersionHash;
- (int)ubiquityLocationType;
- (void)setExportingPeerID:(id)arg1;
- (id)createFullURL;
- (void)setStoreName:(id)arg1;
- (id)storeName;
- (id)ubiquityRootLocation;
- (id)exportingPeerID;
- (id)filename;
- (id)ubiquityRootLocationPath;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end