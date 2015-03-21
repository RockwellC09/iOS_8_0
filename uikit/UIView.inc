{ Parsed from UIKit.framework (iPhoneOS8.2) UIView.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIViewPtr = ^UIView;
  UICoordinateSpaceProtocolPtr = ^UICoordinateSpaceProtocol;
{$endif}

{$ifdef TYPES}
type
  UIViewAnimationCurve = NSInteger;
  UIViewAnimationCurvePtr = ^UIViewAnimationCurve;

const
  UIViewAnimationCurveEaseInOut = 0;
  UIViewAnimationCurveEaseIn = 1;
  UIViewAnimationCurveEaseOut = 2;
  UIViewAnimationCurveLinear = 3;

type
  UIViewContentMode = NSInteger;
  UIViewContentModePtr = ^UIViewContentMode;

const
  UIViewContentModeScaleToFill = 0;
  UIViewContentModeScaleAspectFit = 1;
  UIViewContentModeScaleAspectFill = 2;
  UIViewContentModeRedraw = 3;
  UIViewContentModeCenter = 4;
  UIViewContentModeTop = 5;
  UIViewContentModeBottom = 6;
  UIViewContentModeLeft = 7;
  UIViewContentModeRight = 8;
  UIViewContentModeTopLeft = 9;
  UIViewContentModeTopRight = 10;
  UIViewContentModeBottomLeft = 11;
  UIViewContentModeBottomRight = 12;

type
  UIViewAnimationTransition = NSInteger;
  UIViewAnimationTransitionPtr = ^UIViewAnimationTransition;

const
  UIViewAnimationTransitionNone = 0;
  UIViewAnimationTransitionFlipFromLeft = 1;
  UIViewAnimationTransitionFlipFromRight = 2;
  UIViewAnimationTransitionCurlUp = 3;
  UIViewAnimationTransitionCurlDown = 4;

type
  UIViewAutoresizing = NSUInteger;
  UIViewAutoresizingPtr = ^UIViewAutoresizing;

const
  UIViewAutoresizingNone = 0;
  UIViewAutoresizingFlexibleLeftMargin = 1 shl 0;
  UIViewAutoresizingFlexibleWidth = 1 shl 1;
  UIViewAutoresizingFlexibleRightMargin = 1 shl 2;
  UIViewAutoresizingFlexibleTopMargin = 1 shl 3;
  UIViewAutoresizingFlexibleHeight = 1 shl 4;
  UIViewAutoresizingFlexibleBottomMargin = 1 shl 5;

type
  UIViewAnimationOptions = NSUInteger;
  UIViewAnimationOptionsPtr = ^UIViewAnimationOptions;

const
  UIViewAnimationOptionLayoutSubviews = 1 shl 0;
  UIViewAnimationOptionAllowUserInteraction = 1 shl 1;
  UIViewAnimationOptionBeginFromCurrentState = 1 shl 2;
  UIViewAnimationOptionRepeat = 1 shl 3;
  UIViewAnimationOptionAutoreverse = 1 shl 4;
  UIViewAnimationOptionOverrideInheritedDuration = 1 shl 5;
  UIViewAnimationOptionOverrideInheritedCurve = 1 shl 6;
  UIViewAnimationOptionAllowAnimatedContent = 1 shl 7;
  UIViewAnimationOptionShowHideTransitionViews = 1 shl 8;
  UIViewAnimationOptionOverrideInheritedOptions = 1 shl 9;
  UIViewAnimationOptionCurveEaseInOut = 0 shl 16;
  UIViewAnimationOptionCurveEaseIn = 1 shl 16;
  UIViewAnimationOptionCurveEaseOut = 2 shl 16;
  UIViewAnimationOptionCurveLinear = 3 shl 16;
  UIViewAnimationOptionTransitionNone = 0 shl 20;
  UIViewAnimationOptionTransitionFlipFromLeft = 1 shl 20;
  UIViewAnimationOptionTransitionFlipFromRight = 2 shl 20;
  UIViewAnimationOptionTransitionCurlUp = 3 shl 20;
  UIViewAnimationOptionTransitionCurlDown = 4 shl 20;
  UIViewAnimationOptionTransitionCrossDissolve = 5 shl 20;
  UIViewAnimationOptionTransitionFlipFromTop = 6 shl 20;
  UIViewAnimationOptionTransitionFlipFromBottom = 7 shl 20;

type
  UIViewKeyframeAnimationOptions = NSUInteger;
  UIViewKeyframeAnimationOptionsPtr = ^UIViewKeyframeAnimationOptions;

const
  UIViewKeyframeAnimationOptionLayoutSubviews = UIViewAnimationOptionLayoutSubviews;
  UIViewKeyframeAnimationOptionAllowUserInteraction = UIViewAnimationOptionAllowUserInteraction;
  UIViewKeyframeAnimationOptionBeginFromCurrentState = UIViewAnimationOptionBeginFromCurrentState;
  UIViewKeyframeAnimationOptionRepeat = UIViewAnimationOptionRepeat;
  UIViewKeyframeAnimationOptionAutoreverse = UIViewAnimationOptionAutoreverse;
  UIViewKeyframeAnimationOptionOverrideInheritedDuration = UIViewAnimationOptionOverrideInheritedDuration;
  UIViewKeyframeAnimationOptionOverrideInheritedOptions = UIViewAnimationOptionOverrideInheritedOptions;
  UIViewKeyframeAnimationOptionCalculationModeLinear = 0 shl 10;
  UIViewKeyframeAnimationOptionCalculationModeDiscrete = 1 shl 10;
  UIViewKeyframeAnimationOptionCalculationModePaced = 2 shl 10;
  UIViewKeyframeAnimationOptionCalculationModeCubic = 3 shl 10;
  UIViewKeyframeAnimationOptionCalculationModeCubicPaced = 4 shl 10;

type
  UISystemAnimation = NSUInteger;
  UISystemAnimationPtr = ^UISystemAnimation;

const
  UISystemAnimationDelete = 0;

type
  UIViewTintAdjustmentMode = NSInteger;
  UIViewTintAdjustmentModePtr = ^UIViewTintAdjustmentMode;

const
  UIViewTintAdjustmentModeAutomatic = 0;
  UIViewTintAdjustmentModeNormal = 1;
  UIViewTintAdjustmentModeDimmed = 2;
{$endif}

{$ifdef PROTOCOLS}

type
  UICoordinateSpaceProtocol = objcprotocol external name 'UICoordinateSpace' (NSObjectProtocol)
    function convertPoint_toCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:toCoordinateSpace:'; { available in 8_0 }
    function convertPoint_fromCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:fromCoordinateSpace:'; { available in 8_0 }
    function convertRect_toCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:toCoordinateSpace:'; { available in 8_0 }
    function convertRect_fromCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:fromCoordinateSpace:'; { available in 8_0 }
    function bounds: CGRect; message 'bounds';
  end;
{$endif}

{$ifdef CLASSES}

type
  UIView = objcclass external (UIResponder, NSCodingProtocol, UIAppearanceProtocol, UIAppearanceContainerProtocol, UIDynamicItemProtocol, UITraitEnvironmentProtocol, UICoordinateSpaceProtocol)
  private
    _layer: CALayer;
    _gestureInfo: id;
    _gestureRecognizers: NSMutableArray;
    _subviewCache: NSArray;
    _charge: single;
    _tag: NSInteger;
    _viewDelegate: UIViewController;
    _backgroundColorSystemColorName: NSString;
    _countOfMotionEffectsInSubtree: NSUInteger;
    _viewFlags: bitpacked record
      case byte of
        0: (_anonBitField__viewFlags0: cuint);
        1: (
          userInteractionDisabled: 0..1;
          implementsDrawRect: 0..1;
          implementsDidScroll: 0..1;
          implementsMouseTracking: 0..1;
          implementsIntrinsicContentSize: 0..1;
          hasBackgroundColor: 0..1;
          isOpaque: 0..1;
          becomeFirstResponderWhenCapable: 0..1;
          interceptMouseEvent: 0..1;
          deallocating: 0..1;
          debugFlash: 0..1;
          debugSkippedSetNeedsDisplay: 0..1;
          debugScheduledDisplayIsRequired: 0..1;
          isInAWindow: 0..1;
          isAncestorOfFirstResponder: 0..1;
          dontAutoresizeSubviews: 0..1;
          autoresizeMask: 0..((1 shl 6)-1);
          patternBackground: 0..1;
          fixedBackgroundPattern: 0..1;
          dontAnimate: 0..1;
          superLayerIsView: 0..1;
          layerKitPatternDrawing: 0..1;
          multipleTouchEnabled: 0..1;
          exclusiveTouch: 0..1;
          hasViewController: 0..1;
          needsDidAppearOrDisappear: 0..1;
          gesturesEnabled: 0..1;
          deliversTouchesForGesturesToSuperview: 0..1;
          chargeEnabled: 0..1;
          skipsSubviewEnumeration: 0..1;
          needsDisplayOnBoundsChange: 0..1;
          hasTiledLayer: 0..1;
          hasLargeContent: 0..1;
          unused: 0..1;
          traversalMark: 0..1;
          appearanceIsInvalid: 0..1;
          monitorsSubtree: 0..1;
          hostsAutolayoutEngine: 0..1;
          constraintsAreClean: 0..1;
          subviewLayoutConstraintsAreClean: 0..1;
          intrinsicContentSizeConstraintsAreClean: 0..1;
          potentiallyHasDanglyConstraints: 0..1;
          doesNotTranslateAutoresizingMaskIntoConstraints: 0..1;
          autolayoutIsClean: 0..1;
          layoutFlushingDisabled: 0..1;
          layingOutFromConstraints: 0..1;
          wantsAutolayout: 0..1;
          subviewWantsAutolayout: 0..1;
          isApplyingValuesFromEngine: 0..1;
          isInAutolayout: 0..1;
          isSubviewUpdatingAutoresizingConstraints: 0..1;
          isUpdatingConstraints: 0..1;
          isHostingUpdateConstraintsPassDuringLayout: 0..1;
          isRunningEngineLevelConstraintsPass: 0..1;
          isUnsatisfiableConstraintsLoggingSuspended: 0..1;
          systemLayoutFittingSizeNeedsUpdate: 0..1;
          systemLayoutFittingSizeNeedsUpdateInWholeSubtree: 0..1;
          isCalculatingSystemLayoutFittingSize: 0..1;
          stayHiddenAwaitingReuse: 0..1;
          stayHiddenAfterReuse: 0..1;
          skippedLayoutWhileHiddenForReuse: 0..1;
          hasMaskView: 0..1;
          hasVisualAltitude: 0..1;
          hasBackdropMaskViews: 0..1;
          backdropMaskViewFlags: 0..((1 shl 5)-1);
          delaysTouchesForSystemGestures: 0..1;
          subclassShouldDelayTouchForSystemGestures: 0..1;
          hasMotionEffects: 0..1;
          backdropOverlayMode: 0..((1 shl 2)-1);
          tintAdjustmentMode: 0..((1 shl 2)-1);
          isReferenceView: 0..1;
          focusState: 0..((1 shl 2)-1);
          hasUserInterfaceIdiom: 0..1;
          userInterfaceIdiom: 0..((1 shl 3)-1);
          ancestorDefinesTintColor: 0..1;
          ancestorDefinesTintAdjustmentMode: 0..1;
          needsTraitCollectionDidChange: 0..1;
          coloredViewBounds: 0..1;
          coloredAlignmentRects: 0..1;
          preservesSuperviewMargins: 0..1;
          hasGeometryObservers: 0..1;
          wantsGeometryChanges: 0..1;
        );
      end;
  public
    class function layerClass: pobjc_class; message 'layerClass';
    function initWithFrame (frame: CGRect): instancetype; message 'initWithFrame:';
    procedure setUserInteractionEnabled(newValue: boolean); message 'setUserInteractionEnabled:';
    function isUserInteractionEnabled: boolean; message 'isUserInteractionEnabled';
    procedure setTag(newValue: NSInteger); message 'setTag:';
    function tag: NSInteger; message 'tag';
    function layer: CALayer; message 'layer';

    { Adopted protocols }
    class function appearance: instancetype; message 'appearance';
    class function appearanceForTraitCollection (trait: UITraitCollection): instancetype; message 'appearanceForTraitCollection:'; { available in 8_0 }
    class function appearanceForTraitCollection_whenContainedIn (trait: UITraitCollection; ContainerClass: UIAppearanceContainerProtocol): instancetype; varargs; message 'appearanceForTraitCollection:whenContainedIn:'; { available in 8_0 }
    class function appearanceWhenContainedIn (ContainerClass: UIAppearanceContainerProtocol): instancetype; varargs; message 'appearanceWhenContainedIn:';
    function bounds: CGRect; message 'bounds';
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    function convertPoint_fromCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:fromCoordinateSpace:'; { available in 8_0 }
    function convertPoint_toCoordinateSpace (point: CGPoint; coordinateSpace: UICoordinateSpaceProtocol): CGPoint; message 'convertPoint:toCoordinateSpace:'; { available in 8_0 }
    function convertRect_fromCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:fromCoordinateSpace:'; { available in 8_0 }
    function convertRect_toCoordinateSpace (rect: CGRect; coordinateSpace: UICoordinateSpaceProtocol): CGRect; message 'convertRect:toCoordinateSpace:'; { available in 8_0 }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    function traitCollection: UITraitCollection; message 'traitCollection';
    procedure traitCollectionDidChange (previousTraitCollection: UITraitCollection); message 'traitCollectionDidChange:';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
  end;


type
  UIViewGeometry = objccategory external (UIView)
    procedure setFrame(newValue: CGRect); message 'setFrame:';
    function frame: CGRect; message 'frame';
    procedure setBounds(newValue: CGRect); message 'setBounds:';
    function bounds: CGRect; message 'bounds';
    procedure setCenter(newValue: CGPoint); message 'setCenter:';
    function center: CGPoint; message 'center';
    procedure setTransform(newValue: CGAffineTransform); message 'setTransform:';
    function transform: CGAffineTransform; message 'transform';
    procedure setContentScaleFactor(newValue: CGFloat); message 'setContentScaleFactor:';
    function contentScaleFactor: CGFloat; message 'contentScaleFactor';
    procedure setMultipleTouchEnabled(newValue: boolean); message 'setMultipleTouchEnabled:';
    function isMultipleTouchEnabled: boolean; message 'isMultipleTouchEnabled';
    procedure setExclusiveTouch(newValue: boolean); message 'setExclusiveTouch:';
    function isExclusiveTouch: boolean; message 'isExclusiveTouch';
    function hitTest_withEvent (point: CGPoint; event: UIEvent): UIView; message 'hitTest:withEvent:';
    function pointInside_withEvent (point: CGPoint; event: UIEvent): boolean; message 'pointInside:withEvent:';
    function convertPoint_toView (point: CGPoint; view: UIView): CGPoint; message 'convertPoint:toView:';
    function convertPoint_fromView (point: CGPoint; view: UIView): CGPoint; message 'convertPoint:fromView:';
    function convertRect_toView (rect: CGRect; view: UIView): CGRect; message 'convertRect:toView:';
    function convertRect_fromView (rect: CGRect; view: UIView): CGRect; message 'convertRect:fromView:';
    procedure setAutoresizesSubviews(newValue: boolean); message 'setAutoresizesSubviews:';
    function autoresizesSubviews: boolean; message 'autoresizesSubviews';
    procedure setAutoresizingMask(newValue: UIViewAutoresizing); message 'setAutoresizingMask:';
    function autoresizingMask: UIViewAutoresizing; message 'autoresizingMask';
    function sizeThatFits (size: CGSize): CGSize; message 'sizeThatFits:';
    procedure sizeToFit; message 'sizeToFit';
  end;

type
  UIViewHierarchy = objccategory external (UIView)
    function superview: UIView; message 'superview';
    function subviews: NSArray; message 'subviews';
    function window: UIWindow; message 'window';
    procedure removeFromSuperview; message 'removeFromSuperview';
    procedure insertSubview_atIndex (view: UIView; index: NSInteger); message 'insertSubview:atIndex:';
    procedure exchangeSubviewAtIndex_withSubviewAtIndex (index1: NSInteger; index2: NSInteger); message 'exchangeSubviewAtIndex:withSubviewAtIndex:';
    procedure addSubview (view: UIView); message 'addSubview:';
    procedure insertSubview_belowSubview (view: UIView; siblingSubview: UIView); message 'insertSubview:belowSubview:';
    procedure insertSubview_aboveSubview (view: UIView; siblingSubview: UIView); message 'insertSubview:aboveSubview:';
    procedure bringSubviewToFront (view: UIView); message 'bringSubviewToFront:';
    procedure sendSubviewToBack (view: UIView); message 'sendSubviewToBack:';
    procedure didAddSubview (subview: UIView); message 'didAddSubview:';
    procedure willRemoveSubview (subview: UIView); message 'willRemoveSubview:';
    procedure willMoveToSuperview (newSuperview: UIView); message 'willMoveToSuperview:';
    procedure didMoveToSuperview; message 'didMoveToSuperview';
    procedure willMoveToWindow (newWindow: UIWindow); message 'willMoveToWindow:';
    procedure didMoveToWindow; message 'didMoveToWindow';
    function isDescendantOfView (view: UIView): boolean; message 'isDescendantOfView:';
    function viewWithTag (tag_: NSInteger): UIView; message 'viewWithTag:';
    procedure setNeedsLayout; message 'setNeedsLayout';
    procedure layoutIfNeeded; message 'layoutIfNeeded';
    procedure layoutSubviews; message 'layoutSubviews';
    procedure setLayoutMargins(newValue: UIEdgeInsets); message 'setLayoutMargins:';
    function layoutMargins: UIEdgeInsets; message 'layoutMargins';
    procedure setPreservesSuperviewLayoutMargins(newValue: boolean); message 'setPreservesSuperviewLayoutMargins:';
    function preservesSuperviewLayoutMargins: boolean; message 'preservesSuperviewLayoutMargins';
    procedure layoutMarginsDidChange; message 'layoutMarginsDidChange'; { available in 8_0 }
  end;

type
  UIViewRendering = objccategory external (UIView)
    procedure drawRect (rect: CGRect); message 'drawRect:';
    procedure setNeedsDisplay; message 'setNeedsDisplay';
    procedure setNeedsDisplayInRect (rect: CGRect); message 'setNeedsDisplayInRect:';
    procedure setClipsToBounds(newValue: boolean); message 'setClipsToBounds:';
    function clipsToBounds: boolean; message 'clipsToBounds';
    procedure setBackgroundColor(newValue: UIColor); message 'setBackgroundColor:';
    function backgroundColor: UIColor; message 'backgroundColor';
    procedure setAlpha(newValue: CGFloat); message 'setAlpha:';
    function alpha: CGFloat; message 'alpha';
    procedure setOpaque(newValue: boolean); message 'setOpaque:';
    function isOpaque: boolean; message 'isOpaque';
    procedure setClearsContextBeforeDrawing(newValue: boolean); message 'setClearsContextBeforeDrawing:';
    function clearsContextBeforeDrawing: boolean; message 'clearsContextBeforeDrawing';
    procedure setHidden(newValue: boolean); message 'setHidden:';
    function isHidden: boolean; message 'isHidden';
    procedure setContentMode(newValue: UIViewContentMode); message 'setContentMode:';
    function contentMode: UIViewContentMode; message 'contentMode';
    procedure setContentStretch(newValue: CGRect); message 'setContentStretch:';
    function contentStretch: CGRect; message 'contentStretch';
    procedure setMaskView(newValue: UIView); message 'setMaskView:';
    function maskView: UIView; message 'maskView';
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setTintAdjustmentMode(newValue: UIViewTintAdjustmentMode); message 'setTintAdjustmentMode:';
    function tintAdjustmentMode: UIViewTintAdjustmentMode; message 'tintAdjustmentMode';
    procedure tintColorDidChange; message 'tintColorDidChange'; { available in 7_0 }
  end;

type
  UIViewAnimation = objccategory external (UIView)
    class procedure beginAnimations_context (animationID: NSString; context: pointer); message 'beginAnimations:context:';
    class procedure commitAnimations; message 'commitAnimations';
    class procedure setAnimationDelegate (delegate: id); message 'setAnimationDelegate:';
    class procedure setAnimationWillStartSelector (selector: SEL); message 'setAnimationWillStartSelector:';
    class procedure setAnimationDidStopSelector (selector: SEL); message 'setAnimationDidStopSelector:';
    class procedure setAnimationDuration (duration: NSTimeInterval); message 'setAnimationDuration:';
    class procedure setAnimationDelay (delay: NSTimeInterval); message 'setAnimationDelay:';
    class procedure setAnimationStartDate (startDate: NSDate); message 'setAnimationStartDate:';
    class procedure setAnimationCurve (curve: UIViewAnimationCurve); message 'setAnimationCurve:';
    class procedure setAnimationRepeatCount (repeatCount: single); message 'setAnimationRepeatCount:';
    class procedure setAnimationRepeatAutoreverses (repeatAutoreverses: boolean); message 'setAnimationRepeatAutoreverses:';
    class procedure setAnimationBeginsFromCurrentState (fromCurrentState: boolean); message 'setAnimationBeginsFromCurrentState:';
    class procedure setAnimationTransition_forView_cache (transition: UIViewAnimationTransition; view: UIView; cache: boolean); message 'setAnimationTransition:forView:cache:';
    class procedure setAnimationsEnabled (enabled: boolean); message 'setAnimationsEnabled:';
    class function areAnimationsEnabled: boolean; message 'areAnimationsEnabled';
    class procedure performWithoutAnimation (actionsWithoutAnimation: OpaqueCBlock); message 'performWithoutAnimation:'; { available in 7_0 }
  end;

type
  UIViewAnimationWithBlocks = objccategory external (UIView)
    class procedure animateWithDuration_delay_options_animations_completion (duration: NSTimeInterval; delay: NSTimeInterval; options: UIViewAnimationOptions; animations: OpaqueCBlock; completion: OpaqueCBlock); message 'animateWithDuration:delay:options:animations:completion:'; { available in 4_0 }
    class procedure animateWithDuration_animations_completion (duration: NSTimeInterval; animations: OpaqueCBlock; completion: OpaqueCBlock); message 'animateWithDuration:animations:completion:'; { available in 4_0 }
    class procedure animateWithDuration_animations (duration: NSTimeInterval; animations: OpaqueCBlock); message 'animateWithDuration:animations:'; { available in 4_0 }
    class procedure animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion (duration: NSTimeInterval; delay: NSTimeInterval; dampingRatio: CGFloat; velocity: CGFloat; options: UIViewAnimationOptions; animations: OpaqueCBlock; completion: OpaqueCBlock); message 'animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:'; { available in 7_0 }
    class procedure transitionWithView_duration_options_animations_completion (view: UIView; duration: NSTimeInterval; options: UIViewAnimationOptions; animations: OpaqueCBlock; completion: OpaqueCBlock); message 'transitionWithView:duration:options:animations:completion:'; { available in 4_0 }
    class procedure transitionFromView_toView_duration_options_completion (fromView: UIView; toView: UIView; duration: NSTimeInterval; options: UIViewAnimationOptions; completion: OpaqueCBlock); message 'transitionFromView:toView:duration:options:completion:'; { available in 4_0 }
    class procedure performSystemAnimation_onViews_options_animations_completion (animation: UISystemAnimation; views: NSArray; options: UIViewAnimationOptions; parallelAnimations: OpaqueCBlock; completion: OpaqueCBlock); message 'performSystemAnimation:onViews:options:animations:completion:'; { available in 7_0 }
  end;

type
  UIViewKeyframeAnimations = objccategory external (UIView)
    class procedure animateKeyframesWithDuration_delay_options_animations_completion (duration: NSTimeInterval; delay: NSTimeInterval; options: UIViewKeyframeAnimationOptions; animations: OpaqueCBlock; completion: OpaqueCBlock); message 'animateKeyframesWithDuration:delay:options:animations:completion:'; { available in 7_0 }
    class procedure addKeyframeWithRelativeStartTime_relativeDuration_animations (frameStartTime: double; frameDuration: double; animations: OpaqueCBlock); message 'addKeyframeWithRelativeStartTime:relativeDuration:animations:'; { available in 7_0 }
  end;

type
  UIViewGestureRecognizers = objccategory external (UIView)
    procedure setGestureRecognizers(newValue: NSArray); message 'setGestureRecognizers:';
    function gestureRecognizers: NSArray; message 'gestureRecognizers';
    procedure addGestureRecognizer (gestureRecognizer: UIGestureRecognizer); message 'addGestureRecognizer:'; { available in 3_2 }
    procedure removeGestureRecognizer (gestureRecognizer: UIGestureRecognizer); message 'removeGestureRecognizer:'; { available in 3_2 }
    function gestureRecognizerShouldBegin (gestureRecognizer: UIGestureRecognizer): boolean; message 'gestureRecognizerShouldBegin:'; { available in 6_0 }
  end;

type
  UIViewMotionEffects = objccategory external (UIView)
    procedure addMotionEffect (effect: UIMotionEffect); message 'addMotionEffect:'; { available in 7_0 }
    procedure removeMotionEffect (effect: UIMotionEffect); message 'removeMotionEffect:'; { available in 7_0 }
    procedure setMotionEffects(newValue: NSArray); message 'setMotionEffects:';
    function motionEffects: NSArray; message 'motionEffects';
  end;
{$endif}

{$ifdef TYPES}
type
  UILayoutConstraintAxis = NSInteger;
  UILayoutConstraintAxisPtr = ^UILayoutConstraintAxis;

const
  UILayoutConstraintAxisHorizontal = 0;
  UILayoutConstraintAxisVertical = 1;
{$endif}

{$ifdef CLASSES}

type
  UIConstraintBasedLayoutInstallingConstraints = objccategory external (UIView)
    function constraints: NSArray; message 'constraints'; { available in 6_0 }
    procedure addConstraint (constraint: NSLayoutConstraint); message 'addConstraint:'; { available in 6_0 }
    procedure addConstraints (constraints_: NSArray); message 'addConstraints:'; { available in 6_0 }
    procedure removeConstraint (constraint: NSLayoutConstraint); message 'removeConstraint:'; { available in 6_0 }
    procedure removeConstraints (constraints_: NSArray); message 'removeConstraints:'; { available in 6_0 }
  end;

type
  UIView_UIConstraintBasedLayoutCoreMethods = objccategory external name 'UIConstraintBasedLayoutCoreMethods' (UIView)
    procedure updateConstraintsIfNeeded; message 'updateConstraintsIfNeeded'; { available in 6_0 }
    procedure updateConstraints; message 'updateConstraints'; { available in 6_0 }
    function needsUpdateConstraints: boolean; message 'needsUpdateConstraints'; { available in 6_0 }
    procedure setNeedsUpdateConstraints; message 'setNeedsUpdateConstraints'; { available in 6_0 }
  end;

type
  UIConstraintBasedCompatibility = objccategory external (UIView)
    function translatesAutoresizingMaskIntoConstraints: boolean; message 'translatesAutoresizingMaskIntoConstraints'; { available in 6_0 }
    procedure setTranslatesAutoresizingMaskIntoConstraints (flag: boolean); message 'setTranslatesAutoresizingMaskIntoConstraints:'; { available in 6_0 }
    class function requiresConstraintBasedLayout: boolean; message 'requiresConstraintBasedLayout'; { available in 6_0 }
  end;

type
  UIConstraintBasedLayoutLayering = objccategory external (UIView)
    function alignmentRectForFrame (frame: CGRect): CGRect; message 'alignmentRectForFrame:'; { available in 6_0 }
    function frameForAlignmentRect (alignmentRect: CGRect): CGRect; message 'frameForAlignmentRect:'; { available in 6_0 }
    function alignmentRectInsets: UIEdgeInsets; message 'alignmentRectInsets'; { available in 6_0 }
    function viewForBaselineLayout: UIView; message 'viewForBaselineLayout'; { available in 6_0 }
    function intrinsicContentSize: CGSize; message 'intrinsicContentSize'; { available in 6_0 }
    procedure invalidateIntrinsicContentSize; message 'invalidateIntrinsicContentSize'; { available in 6_0 }
    function contentHuggingPriorityForAxis (axis: UILayoutConstraintAxis): UILayoutPriority; message 'contentHuggingPriorityForAxis:'; { available in 6_0 }
    procedure setContentHuggingPriority_forAxis (priority: UILayoutPriority; axis: UILayoutConstraintAxis); message 'setContentHuggingPriority:forAxis:'; { available in 6_0 }
    function contentCompressionResistancePriorityForAxis (axis: UILayoutConstraintAxis): UILayoutPriority; message 'contentCompressionResistancePriorityForAxis:'; { available in 6_0 }
    procedure setContentCompressionResistancePriority_forAxis (priority: UILayoutPriority; axis: UILayoutConstraintAxis); message 'setContentCompressionResistancePriority:forAxis:'; { available in 6_0 }
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UILayoutFittingCompressedSize: CGSize { available in 6_0 }; cvar; external;
  UILayoutFittingExpandedSize: CGSize { available in 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIConstraintBasedLayoutFittingSize = objccategory external (UIView)
    function systemLayoutSizeFittingSize (targetSize: CGSize): CGSize; message 'systemLayoutSizeFittingSize:'; { available in 6_0 }
    function systemLayoutSizeFittingSize_withHorizontalFittingPriority_verticalFittingPriority (targetSize: CGSize; horizontalFittingPriority: UILayoutPriority; verticalFittingPriority: UILayoutPriority): CGSize; message 'systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:'; { available in 8_0 }
  end;

type
  UIConstraintBasedLayoutDebugging = objccategory external (UIView)
    function constraintsAffectingLayoutForAxis (axis: UILayoutConstraintAxis): NSArray; message 'constraintsAffectingLayoutForAxis:'; { available in 6_0 }
    function hasAmbiguousLayout: boolean; message 'hasAmbiguousLayout'; { available in 6_0 }
    procedure exerciseAmbiguityInLayout; message 'exerciseAmbiguityInLayout'; { available in 6_0 }
  end;

type
  UIView_UIStateRestoration = objccategory external name 'UIStateRestoration' (UIView)
    procedure setRestorationIdentifier(newValue: NSString); message 'setRestorationIdentifier:';
    function restorationIdentifier: NSString; message 'restorationIdentifier';
    procedure encodeRestorableStateWithCoder (coder: NSCoder); message 'encodeRestorableStateWithCoder:'; { available in 6_0 }
    procedure decodeRestorableStateWithCoder (coder: NSCoder); message 'decodeRestorableStateWithCoder:'; { available in 6_0 }
  end;

type
  UIView_UISnapshotting = objccategory external name 'UISnapshotting' (UIView)
    function snapshotViewAfterScreenUpdates (afterUpdates: boolean): UIView; message 'snapshotViewAfterScreenUpdates:'; { available in 7_0 }
    function resizableSnapshotViewFromRect_afterScreenUpdates_withCapInsets (rect: CGRect; afterUpdates: boolean; capInsets: UIEdgeInsets): UIView; message 'resizableSnapshotViewFromRect:afterScreenUpdates:withCapInsets:'; { available in 7_0 }
    function drawViewHierarchyInRect_afterScreenUpdates (rect: CGRect; afterUpdates: boolean): boolean; message 'drawViewHierarchyInRect:afterScreenUpdates:'; { available in 7_0 }
  end;
{$endif}

