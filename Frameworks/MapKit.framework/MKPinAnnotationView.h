/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPinAnnotationViewInternal;

@interface MKPinAnnotationView : MKAnnotationView {
    MKPinAnnotationViewInternal *_pinInternal;
}

@property BOOL animatesDrop;
@property unsigned int pinColor;

+ (id)_bounceAnimation;
+ (struct CGPoint { float x1; float x2; })_calloutOffset;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_desiredBounds;
+ (id)_dropAnimation;
+ (id)_dropBounceAnimation;
+ (struct CGPoint { float x1; float x2; })_perceivedAnchorPoint;
+ (struct CGSize { float x1; float x2; })_perceivedSize;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pinFrameForPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_pinsWithType:(int)arg1;
+ (id)_reuseIdentifier;
+ (struct CGPoint { float x1; float x2; })_shadowAnchorPoint;
+ (id)_shadowDropAnimation;
+ (id)_shadowImage;
+ (Class)layerClass;

- (id)_bounceAnimation:(BOOL)arg1 withBeginTime:(double)arg2 addToLayer:(BOOL)arg3;
- (void)_cleanupAfterPinDropAnimation;
- (id)_delegate;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_dropFromPoint:(struct CGPoint { float x1; float x2; })arg1 shadowStartPoint:(struct CGPoint { float x1; float x2; })arg2 distance:(float)arg3 maxDistance:(float)arg4 withDelay:(double)arg5;
- (id)_floatingImage;
- (id)_highlightedImage;
- (id)_image;
- (id)_internal;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftForDraggingAnimated:(BOOL)arg1;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (int)_pinType;
- (id)_pins;
- (void)_removeAllAnimations;
- (void)_reset;
- (void)_setDelegate:(id)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_setPinType:(int)arg1;
- (void)_setRotationRadians:(float)arg1 withAnimation:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (int)_state;
- (void)_stopDrop;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_updatePinType;
- (BOOL)animatesDrop;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isHighlighted;
- (unsigned int)pinColor;
- (void)setAnimatesDrop:(BOOL)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDragState:(unsigned int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPinColor:(unsigned int)arg1;

@end
