/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUControlCenterMediaControlsViewController : MPUMediaRemoteViewController <CCUIControlCenterPageContentProviding, MPAVRoutingControllerDelegate, MPAVRoutingViewControllerDelegate, MPUControlCenterMediaControlsViewDelegate> {
    BOOL  _controlCenterPageIsVisible;
    MPWeakTimer * _controlCenterPageVisibilityUpdateTimer;
    <CCUIControlCenterPageContentViewControllerDelegate> * _delegate;
    MPWeakTimer * _pendingRouteStateTimer;
    MPAVRoutingController * _routingController;
    MPAVRoutingViewController * _routingViewController;
    BOOL  _routingViewVisible;
    BOOL  _viewHasAppeared;
}

@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIControlCenterPageContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL wantsVisible;

+ (Class)controlsViewClass;
+ (Class)transportControlButtonClass;

- (void).cxx_destruct;
- (unsigned int)_currentLayoutStyle;
- (void)_initControlCenterMediaControlsViewController;
- (id)_mediaControlsView;
- (void)_pickedRouteHeaderViewTapped:(id)arg1;
- (void)_reloadCurrentLayoutStyle;
- (void)_reloadRoutingControllerDiscoveryMode;
- (void)_setRoutingViewControllerVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupControlCenterPageVisibilityUpdateTimer;
- (id)allowedTransportControlTypes;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)mediaControlsView:(id)arg1 willTransitionToCompactView:(BOOL)arg2;
- (void)mediaControlsViewPrimaryActionTriggered:(id)arg1;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
- (id)remoteControlInterfaceIdentifier;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)transportControlsView:(id)arg1 buttonForControlType:(int)arg2;
- (struct CGSize { float x1; float x2; })transportControlsView:(id)arg1 defaultTransportButtonSizeWithProposedSize:(struct CGSize { float x1; float x2; })arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
