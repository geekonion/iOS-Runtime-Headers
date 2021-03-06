/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenAppNavbarManager : NSObject <CKAvatarNotificationCalloutViewDelegate> {
    UIButton * _appIconButton;
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKNavigationBarCanvasView * _canvasView;
    CKConversation * _conversation;
    UILabel * _defaultTitleLabel;
    <CKFullScreenAppNavbarManagerDelegate> * _delegate;
    UIButton * _dismissButton;
    NSTimer * _notificationTimer;
    NSMutableArray * _notificationViews;
    IMBalloonPlugin * _plugin;
    int  _style;
}

@property (nonatomic, retain) UIButton *appIconButton;
@property (nonatomic, retain) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, retain) CKNavigationBarCanvasView *canvasView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UILabel *defaultTitleLabel;
@property (nonatomic) <CKFullScreenAppNavbarManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *dismissButton;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSTimer *notificationTimer;
@property (nonatomic, retain) NSMutableArray *notificationViews;
@property (nonatomic, retain) IMBalloonPlugin *plugin;
@property (nonatomic) int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addNotificationViewToQueue;
- (BOOL)_canShowAvatarView;
- (void)_configureCanvasView;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)_dequeueNotificationViews:(id)arg1;
- (BOOL)_didReceiveMessageChatItem:(id)arg1 addedChatItems:(id)arg2;
- (void)_handleChatDisplayNameChange:(id)arg1;
- (void)_handleChatItemDidChange:(id)arg1;
- (void)_invalidateTimer;
- (void)_removeAllNotifications;
- (BOOL)_shouldStartnotificationQueue;
- (void)_startNotificationQueue;
- (void)_updateDismissButton;
- (void)_updateTitleLabelText;
- (void)_updateTitleView;
- (int)_viewModeForCalloutView;
- (id)appIconButton;
- (void)avatarNotificationCalloutViewDidFinishFadeOut:(id)arg1;
- (void)avatarNotificationCalloutViewReceivedTouch:(id)arg1;
- (void)avatarNotificationCalloutViewWillFadeIn:(id)arg1;
- (id)avatarPickerViewController;
- (id)canvasView;
- (id)conversation;
- (void)dealloc;
- (id)defaultTitleLabel;
- (id)delegate;
- (id)dismissButton;
- (void)dismissNotifications;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (id)notificationTimer;
- (id)notificationViews;
- (id)plugin;
- (void)setAppIconButton:(id)arg1;
- (void)setAvatarPickerViewController:(id)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDefaultTitleLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setNotificationTimer:(id)arg1;
- (void)setNotificationViews:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;

@end
