/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData;

@interface _PFEncodedData : NSData  {
    NSData *_aData;
    unsigned int _byteCount;
}


- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (unsigned int)retainCount;
- (id)description;
- (id)retain;
- (unsigned int)length;
- (void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (const void*)bytes;
- (id)mutableCopy;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)privateCopy;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
