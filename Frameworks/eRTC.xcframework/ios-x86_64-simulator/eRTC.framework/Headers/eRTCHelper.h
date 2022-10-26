

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface eRTCHelper : NSObject
typedef void(^addressCompletion)(NSString *);

+(void)ClearStoredData;
+ (NSString *)CreateUUID;
+(NSString *)createCurrentTimestampId;
+(NSNumber *)createCurrentTimestampInMillis;
+(NSString *)getFormattedTime:(NSDate *)strDate;
+(NSString *)getScheduleFormattedTime:(NSString *)strDate;
+(NSString *)getScheduleInfoFormattedTime:(NSString *)strDate;
+ (UIImage *)reduceImageSize:(UIImage *)image;
+(NSString *)getFormattedTimeFromNSDate:(NSDate *)date;
//+ (void)getAddressFromLocation:(CLLocation *)location complationBlock:(addressCompletion)completionBlock;
+ (NSString*)decodeEmoji:(NSString*)input;
+ (NSString*)encodeEmoji:(NSString*)input;
+ (double)getAudioDurationWithUrl:(NSString *)url;
+ (void)deleteLocalDirectoryFiles;
+ (void)clearAllDataWithEntityName:(NSString*)entity;
+ (void)uploadAllStringsToApplanga;
+ (CGImageRef)newTransformedImage:(CGAffineTransform)transform
                      sourceImage:(CGImageRef)sourceImage
                       sourceSize:(CGSize)sourceSize
                sourceOrientation:(UIImageOrientation)sourceOrientation
                      outputWidth:(CGFloat)outputWidth
                         cropSize:(CGSize)cropSize
                    imageViewSize:(CGSize)imageViewSize;
+ (CGImageRef)newScaledImage:(CGImageRef)source withOrientation:(UIImageOrientation)orientation toSize:(CGSize)size withQuality:(CGInterpolationQuality)quality;
+ (UIImage*)imageByCombiningImage:(UIImage*)firstImage withImage:(UIImage*)secondImage atPoint:(CGPoint)point;
+ (UIImage *) drawLabel:(UILabel*)lbl inImage:(UIImage*)image atPoint:(CGPoint)point;
+ (UIImage *) imageFromString:(NSString*)text;
+ (UIImage*)scaleAndRotateImage:(UIImageView *)emojiImageView;
+ (NSArray *) emojis;
+ (UIImage*)generateThumbImage : (NSURL* )url;
+ (void)compressVideo:(NSURL*)inputURL
            outputURL:(NSURL*)outputURL
              handler:(void (^)(AVAssetExportSession*))completion;
+ (void)convertVideoToLowQuailtyWithInputURL:(NSURL*)inputURL
                                   outputURL:(NSURL*)outputURL
                                     handler:(void (^)(AVAssetExportSession*))handler;
+ (UIImage *)imageFromColor:(UIColor *)color;

+ (void)piwinTrackViewWithViews:(NSArray*)views;
+ (void)removeFileFromUrl:(NSURL*)url;

+ (NSString*)MD5:(NSData *)data;

+ (void)convertVideoToLowQuailtyWithInputURL:(NSURL*)inputURL
                                   outputURL:(NSURL*)outputURL
                                     handler:(void (^)(AVAssetExportSession*))handler;

+(BOOL)isNightTime;
+ (NSString *)getCurrentEpochTime;

+ (NSString *)getCurrentEpochTimeMs;

+ (NSString *)convertObjectInToJsonString:(id)aDict;
+(BOOL)objectIsNilOrEmpty:(id)obj andKey:(NSString *) key;
+ (NSString *)getUUID;
+(void)setChatAccessToken:(NSString *)chatAccessToken;
+(NSString *)getChatAccessToken;
+(void)setChatAccessRefreshToken:(NSString *)chatAccessRefreshToken;
+(NSString *)getChatAccessRefreshToken;
+(void)setUserAccessToken:(NSString *)userAccessToken;
+(NSString *)getuserAccessToken;
+(void)setUserAccessRefreshToken:(NSString *)userAccessRefreshToken;
+(NSString *)getuserAccessRefreshToken;
+(void)setLoginUserId:(NSString *)loginUserId;
+(NSString *)getLoginUserId;
+(void)setLastCallTime:(NSString *)lastCallTime;
+(NSString *)getLastCallTime;
+(BOOL)isValidDocExt:(NSString *)fileExtension;
+(NSError *)getFeatureConfigError:(NSString *)message andErrorCode:(NSInteger)code;
+(NSString*)replaceTags:(NSString*)message;
+ (NSString *)getCurrentEpochTimeMs;
+(NSError *)internetError;
@end

NS_ASSUME_NONNULL_END
