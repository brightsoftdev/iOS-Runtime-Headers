/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSArray;

@interface CAWindowServer : NSObject  {
    struct CAWindowServerImpl { struct __CFArray {} *x1; unsigned int x2; } *_impl;
}

@property(readonly) NSArray * displays;
@property(getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;

+ (id)context;
+ (id)contextWithOptions:(id)arg1;
+ (id)serverIfRunning;
+ (id)server;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)removeDisplay:(id)arg1;
- (void)removeAllDisplays;
- (id)displayWithName:(id)arg1;
- (unsigned int)rendererFlags;
- (void)_detectDisplays;
- (void)addDisplay:(id)arg1;
- (void)setMirroringEnabled:(BOOL)arg1;
- (BOOL)isMirroringEnabled;
- (id)displays;
- (void)setRendererFlags:(unsigned int)arg1;
- (id)_init;

@end
