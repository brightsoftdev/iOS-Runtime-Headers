/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCLogging : NSObject  {
}

+ (struct dispatch_queue_s { }*)dispatchQueue;
+ (void)enableConsoleLoggingForLevel:(int)arg1;
+ (BOOL)loggingEnabledForLevel:(int)arg1;
+ (id)logFileDirectory;
+ (void)initialize;
+ (void)enableLoggingForCustomHandler:(id)arg1;
+ (void)enableFileLogging:(BOOL)arg1;
+ (id)_stringWithCurrentTime;
+ (void)_appendString:(id)arg1 toFileNamed:(id)arg2;
+ (struct dispatch_group_s { }*)dispatchGroup;
+ (void)__appendString:(id)arg1 toFileNamed:(id)arg2;
+ (void)logKeepAliveInterval:(double)arg1 forServiceIdentifier:(id)arg2;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3 arguments:(void*)arg4;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3;


@end
