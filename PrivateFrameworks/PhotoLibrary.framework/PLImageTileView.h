/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */



@interface PLImageTileView : UITiledView 
{
    id _delegate;
}

+ (Class)tileClass;
+ (NSInteger)tileWidth;
+ (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;

- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setDelegate:(id)arg1;
- (id)_createTileWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (BOOL)tilesNeedDisplay;

@end