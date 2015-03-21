{ Parsed from UIKit.framework (iPhoneOS8.2) UISearchBar.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UISearchBarPtr = ^UISearchBar;
  UISearchBarDelegateProtocolPtr = ^UISearchBarDelegateProtocol;
{$endif}

{$ifdef TYPES}
type
  UISearchBarIcon = NSInteger;
  UISearchBarIconPtr = ^UISearchBarIcon;

const
  UISearchBarIconSearch = 0;
  UISearchBarIconClear = 1;
  UISearchBarIconBookmark = 2;
  UISearchBarIconResultsList = 3;

type
  UISearchBarStyle = NSUInteger;
  UISearchBarStylePtr = ^UISearchBarStyle;

const
  UISearchBarStyleDefault = 0;
  UISearchBarStyleProminent = 1;
  UISearchBarStyleMinimal = 2;
{$endif}

{$ifdef CLASSES}

type
  UISearchBar = objcclass external (UIView, UIBarPositioningProtocol, UITextInputTraitsProtocol)
  public
    procedure setBarStyle(newValue: UIBarStyle); message 'setBarStyle:';
    function barStyle: UIBarStyle; message 'barStyle';
    procedure setDelegate(newValue: UISearchBarDelegateProtocol); message 'setDelegate:';
    function delegate: UISearchBarDelegateProtocol; message 'delegate';
    procedure setText(newValue: NSString); message 'setText:';
    function text: NSString; message 'text';
    procedure setPrompt(newValue: NSString); message 'setPrompt:';
    function prompt: NSString; message 'prompt';
    procedure setPlaceholder(newValue: NSString); message 'setPlaceholder:';
    function placeholder: NSString; message 'placeholder';
    procedure setShowsBookmarkButton(newValue: boolean); message 'setShowsBookmarkButton:';
    function showsBookmarkButton: boolean; message 'showsBookmarkButton';
    procedure setShowsCancelButton(newValue: boolean); message 'setShowsCancelButton:';
    function showsCancelButton: boolean; message 'showsCancelButton';
    procedure setShowsSearchResultsButton(newValue: boolean); message 'setShowsSearchResultsButton:';
    function showsSearchResultsButton: boolean; message 'showsSearchResultsButton';
    procedure setSearchResultsButtonSelected(newValue: boolean); message 'setSearchResultsButtonSelected:';
    function isSearchResultsButtonSelected: boolean; message 'isSearchResultsButtonSelected';
    procedure setShowsCancelButton_animated (showsCancelButton_: boolean; animated: boolean); message 'setShowsCancelButton:animated:'; { available in 3_0 }
    procedure setTintColor(newValue: UIColor); message 'setTintColor:';
    function tintColor: UIColor; message 'tintColor';
    procedure setBarTintColor(newValue: UIColor); message 'setBarTintColor:';
    function barTintColor: UIColor; message 'barTintColor';
    procedure setSearchBarStyle(newValue: UISearchBarStyle); message 'setSearchBarStyle:';
    function searchBarStyle: UISearchBarStyle; message 'searchBarStyle';
    procedure setTranslucent(newValue: boolean); message 'setTranslucent:';
    function isTranslucent: boolean; message 'isTranslucent';
    procedure setScopeButtonTitles(newValue: NSArray); message 'setScopeButtonTitles:';
    function scopeButtonTitles: NSArray; message 'scopeButtonTitles';
    procedure setSelectedScopeButtonIndex(newValue: NSInteger); message 'setSelectedScopeButtonIndex:';
    function selectedScopeButtonIndex: NSInteger; message 'selectedScopeButtonIndex';
    procedure setShowsScopeBar(newValue: boolean); message 'setShowsScopeBar:';
    function showsScopeBar: boolean; message 'showsScopeBar';
    procedure setInputAccessoryView(newValue: UIView); message 'setInputAccessoryView:';
    function inputAccessoryView: UIView; message 'inputAccessoryView';
    procedure setBackgroundImage(newValue: UIImage); message 'setBackgroundImage:';
    function backgroundImage: UIImage; message 'backgroundImage';
    procedure setScopeBarBackgroundImage(newValue: UIImage); message 'setScopeBarBackgroundImage:';
    function scopeBarBackgroundImage: UIImage; message 'scopeBarBackgroundImage';
    procedure setBackgroundImage_forBarPosition_barMetrics (backgroundImage_: UIImage; barPosition: UIBarPosition; barMetrics: UIBarMetrics); message 'setBackgroundImage:forBarPosition:barMetrics:'; { available in 7_0 }
    function backgroundImageForBarPosition_barMetrics (barPosition: UIBarPosition; barMetrics: UIBarMetrics): UIImage; message 'backgroundImageForBarPosition:barMetrics:'; { available in 7_0 }
    procedure setSearchFieldBackgroundImage_forState (backgroundImage_: UIImage; state: UIControlState); message 'setSearchFieldBackgroundImage:forState:'; { available in 5_0 }
    function searchFieldBackgroundImageForState (state: UIControlState): UIImage; message 'searchFieldBackgroundImageForState:'; { available in 5_0 }
    procedure setImage_forSearchBarIcon_state (iconImage: UIImage; icon: UISearchBarIcon; state: UIControlState); message 'setImage:forSearchBarIcon:state:'; { available in 5_0 }
    function imageForSearchBarIcon_state (icon: UISearchBarIcon; state: UIControlState): UIImage; message 'imageForSearchBarIcon:state:'; { available in 5_0 }
    procedure setScopeBarButtonBackgroundImage_forState (backgroundImage_: UIImage; state: UIControlState); message 'setScopeBarButtonBackgroundImage:forState:'; { available in 5_0 }
    function scopeBarButtonBackgroundImageForState (state: UIControlState): UIImage; message 'scopeBarButtonBackgroundImageForState:'; { available in 5_0 }
    procedure setScopeBarButtonDividerImage_forLeftSegmentState_rightSegmentState (dividerImage: UIImage; leftState: UIControlState; rightState: UIControlState); message 'setScopeBarButtonDividerImage:forLeftSegmentState:rightSegmentState:'; { available in 5_0 }
    function scopeBarButtonDividerImageForLeftSegmentState_rightSegmentState (leftState: UIControlState; rightState: UIControlState): UIImage; message 'scopeBarButtonDividerImageForLeftSegmentState:rightSegmentState:'; { available in 5_0 }
    procedure setScopeBarButtonTitleTextAttributes_forState (attributes: NSDictionary; state: UIControlState); message 'setScopeBarButtonTitleTextAttributes:forState:'; { available in 5_0 }
    function scopeBarButtonTitleTextAttributesForState (state: UIControlState): NSDictionary; message 'scopeBarButtonTitleTextAttributesForState:'; { available in 5_0 }
    procedure setSearchFieldBackgroundPositionAdjustment(newValue: UIOffset); message 'setSearchFieldBackgroundPositionAdjustment:';
    function searchFieldBackgroundPositionAdjustment: UIOffset; message 'searchFieldBackgroundPositionAdjustment';
    procedure setSearchTextPositionAdjustment(newValue: UIOffset); message 'setSearchTextPositionAdjustment:';
    function searchTextPositionAdjustment: UIOffset; message 'searchTextPositionAdjustment';
    procedure setPositionAdjustment_forSearchBarIcon (adjustment: UIOffset; icon: UISearchBarIcon); message 'setPositionAdjustment:forSearchBarIcon:'; { available in 5_0 }
    function positionAdjustmentForSearchBarIcon (icon: UISearchBarIcon): UIOffset; message 'positionAdjustmentForSearchBarIcon:'; { available in 5_0 }

    { Adopted protocols }
    procedure setAutocapitalizationType(newValue: UITextAutocapitalizationType); message 'setAutocapitalizationType:';
    function autocapitalizationType: UITextAutocapitalizationType; message 'autocapitalizationType';
    procedure setAutocorrectionType(newValue: UITextAutocorrectionType); message 'setAutocorrectionType:';
    function autocorrectionType: UITextAutocorrectionType; message 'autocorrectionType';
    function barPosition: UIBarPosition; message 'barPosition';
    procedure setEnablesReturnKeyAutomatically(newValue: boolean); message 'setEnablesReturnKeyAutomatically:';
    function enablesReturnKeyAutomatically: boolean; message 'enablesReturnKeyAutomatically';
    procedure setKeyboardAppearance(newValue: UIKeyboardAppearance); message 'setKeyboardAppearance:';
    function keyboardAppearance: UIKeyboardAppearance; message 'keyboardAppearance';
    procedure setKeyboardType(newValue: UIKeyboardType); message 'setKeyboardType:';
    function keyboardType: UIKeyboardType; message 'keyboardType';
    procedure setReturnKeyType(newValue: UIReturnKeyType); message 'setReturnKeyType:';
    function returnKeyType: UIReturnKeyType; message 'returnKeyType';
    procedure setSecureTextEntry(newValue: boolean); message 'setSecureTextEntry:';
    function isSecureTextEntry: boolean; message 'isSecureTextEntry';
    procedure setSpellCheckingType(newValue: UITextSpellCheckingType); message 'setSpellCheckingType:';
    function spellCheckingType: UITextSpellCheckingType; message 'spellCheckingType';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UISearchBarDelegateProtocol = objcprotocol external name 'UISearchBarDelegate' (UIBarPositioningDelegateProtocol)
  optional
    function searchBarShouldBeginEditing (searchBar: UISearchBar): boolean; message 'searchBarShouldBeginEditing:';
    procedure searchBarTextDidBeginEditing (searchBar: UISearchBar); message 'searchBarTextDidBeginEditing:';
    function searchBarShouldEndEditing (searchBar: UISearchBar): boolean; message 'searchBarShouldEndEditing:';
    procedure searchBarTextDidEndEditing (searchBar: UISearchBar); message 'searchBarTextDidEndEditing:';
    procedure searchBar_textDidChange (searchBar: UISearchBar; searchText: NSString); message 'searchBar:textDidChange:';
    function searchBar_shouldChangeTextInRange_replacementText (searchBar: UISearchBar; range: NSRange; text: NSString): boolean; message 'searchBar:shouldChangeTextInRange:replacementText:'; { available in 3_0 }
    procedure searchBarSearchButtonClicked (searchBar: UISearchBar); message 'searchBarSearchButtonClicked:';
    procedure searchBarBookmarkButtonClicked (searchBar: UISearchBar); message 'searchBarBookmarkButtonClicked:';
    procedure searchBarCancelButtonClicked (searchBar: UISearchBar); message 'searchBarCancelButtonClicked:';
    procedure searchBarResultsListButtonClicked (searchBar: UISearchBar); message 'searchBarResultsListButtonClicked:'; { available in 3_2 }
    procedure searchBar_selectedScopeButtonIndexDidChange (searchBar: UISearchBar; selectedScope: NSInteger); message 'searchBar:selectedScopeButtonIndexDidChange:'; { available in 3_0 }
  end;
{$endif}

