/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaItem;

@interface IUMediaQueryNowPlayingItem : MPAVItem  {
    MPMediaItem *_mediaItem;
}

@property(readonly) MPMediaItem * mediaItem;

+ (void)setDefaultScaleMode:(unsigned int)arg1;
+ (unsigned int)defaultScaleMode;
+ (id)_imageCache;

- (unsigned long long)persistentID;
- (id)description;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;
- (id)mediaItem;
- (BOOL)wantsSubtitles;
- (id)titlesForTime:(double)arg1;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2;
- (BOOL)isStreamable;
- (BOOL)hasDataForItemArtwork;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)isAssetURLValid;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
- (id)albumArtist;
- (void)updateAttributesForDefaultsChange:(id)arg1;
- (void)setupPlaybackInfo;
- (void)setUserEnabledSubtitles:(BOOL)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (double)playbackCheckpointCurrentTime;
- (void)notePlaybackFinishedByHittingEnd;
- (void)setPlaybackStoppedTime:(double)arg1;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (BOOL)allowAutoChangingScaleModeToFill;
- (BOOL)hasDisplayableText;
- (double)durationFromExternalMetadata;
- (id)urlTimeMarkers;
- (id)artworkTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)defaultPlaybackRate;
- (id)displayableText;
- (void)loadAssetAndPlayerItem;
- (void)setSubtitleTrackID:(unsigned int)arg1;
- (void)setAlternateAudioTrackID:(unsigned int)arg1;
- (id)chapterTimeMarkers;
- (id)artworkMIMEType;
- (id)artworkImageData;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (id)genre;
- (id)composer;
- (id)artist;
- (id)album;
- (void)setRating:(float)arg1;
- (unsigned int)type;
- (id)mainTitle;
- (float)userRating;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (void)pushBookmarkingTimesToCloud;
- (void)_updateRentalsPlistForFinish;
- (id)_chapterTitleForTime:(double)arg1;
- (id)_newTimeMarkersForChapterType:(int)arg1;

@end
