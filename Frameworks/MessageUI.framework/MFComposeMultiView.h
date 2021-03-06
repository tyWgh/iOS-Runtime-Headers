/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFHeaderLabelView, UILabel;

@interface MFComposeMultiView : MFComposeHeaderView {
    UILabel *_accountLabel;
    MFHeaderLabelView *_imageSizeHeaderLabelView;
    UILabel *_imageSizeLabel;
    BOOL _imageSizeShown;
    UILabel *_placeholderImageSizeLabel;
}

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_initialLabelFrame;
- (id)accountLabel;
- (void)dealloc;
- (id)imageSizeHeaderLabelView;
- (id)imageSizeLabel;
- (void)layoutSubviews;
- (id)placeholderImageSizeLabel;
- (void)setAccountDescription:(id)arg1;
- (void)setImageSizeDescription:(id)arg1;
- (void)setShowsImageSize:(BOOL)arg1;

@end
