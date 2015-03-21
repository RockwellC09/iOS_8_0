{ Parsed from CoreText.framework (iPhoneOS8.2) CTFont.h }
{ Created on Fri Mar 20 2:11:07 2015 }

{$ifndef __CTFONT__}

{$if defined(TARGET_OS_IPHONE)}
{$ifdef TYPES}
type
  CTFontRef = OpaqueType;
{$endif}

{$else}
{$ifdef TYPES}
type
  CTFontRef = OpaqueType;
{$endif}

{$endif}
{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontCopyrightNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFamilyNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontSubFamilyNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontStyleNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontUniqueNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFullNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVersionNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontPostScriptNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontTrademarkNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontManufacturerNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontDesignerNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontDescriptionNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVendorURLNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontDesignerURLNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontLicenseNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontLicenseURLNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontSampleTextNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontPostScriptCIDNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifdef TYPES}
type
  CTFontOptions = CFOptionFlags;
  CTFontOptionsPtr = ^CTFontOptions;

const
  kCTFontOptionsDefault = 0;
  kCTFontOptionsPreventAutoActivation = 1 shl 0;
  kCTFontOptionsPreferSystemFont = 1 shl 2;

type
  CTFontUIFontType = cuint32;
  CTFontUIFontTypePtr = ^CTFontUIFontType;

const
  kCTFontUIFontNone = -1;
  kCTFontUIFontUser = 0;
  kCTFontUIFontUserFixedPitch = 1;
  kCTFontUIFontSystem = 2;
  kCTFontUIFontEmphasizedSystem = 3;
  kCTFontUIFontSmallSystem = 4;
  kCTFontUIFontSmallEmphasizedSystem = 5;
  kCTFontUIFontMiniSystem = 6;
  kCTFontUIFontMiniEmphasizedSystem = 7;
  kCTFontUIFontViews = 8;
  kCTFontUIFontApplication = 9;
  kCTFontUIFontLabel = 10;
  kCTFontUIFontMenuTitle = 11;
  kCTFontUIFontMenuItem = 12;
  kCTFontUIFontMenuItemMark = 13;
  kCTFontUIFontMenuItemCmdKey = 14;
  kCTFontUIFontWindowTitle = 15;
  kCTFontUIFontPushButton = 16;
  kCTFontUIFontUtilityWindowTitle = 17;
  kCTFontUIFontAlertHeader = 18;
  kCTFontUIFontSystemDetail = 19;
  kCTFontUIFontEmphasizedSystemDetail = 20;
  kCTFontUIFontToolbar = 21;
  kCTFontUIFontSmallToolbar = 22;
  kCTFontUIFontMessage = 23;
  kCTFontUIFontPalette = 24;
  kCTFontUIFontToolTip = 25;
  kCTFontUIFontControlContent = 26;
  kCTFontNoFontType = kCTFontUIFontNone;
  kCTFontUserFontType = kCTFontUIFontUser;
  kCTFontUserFixedPitchFontType = kCTFontUIFontUserFixedPitch;
  kCTFontSystemFontType = kCTFontUIFontSystem;
  kCTFontEmphasizedSystemFontType = kCTFontUIFontEmphasizedSystem;
  kCTFontSmallSystemFontType = kCTFontUIFontSmallSystem;
  kCTFontSmallEmphasizedSystemFontType = kCTFontUIFontSmallEmphasizedSystem;
  kCTFontMiniSystemFontType = kCTFontUIFontMiniSystem;
  kCTFontMiniEmphasizedSystemFontType = kCTFontUIFontMiniEmphasizedSystem;
  kCTFontViewsFontType = kCTFontUIFontViews;
  kCTFontApplicationFontType = kCTFontUIFontApplication;
  kCTFontLabelFontType = kCTFontUIFontLabel;
  kCTFontMenuTitleFontType = kCTFontUIFontMenuTitle;
  kCTFontMenuItemFontType = kCTFontUIFontMenuItem;
  kCTFontMenuItemMarkFontType = kCTFontUIFontMenuItemMark;
  kCTFontMenuItemCmdKeyFontType = kCTFontUIFontMenuItemCmdKey;
  kCTFontWindowTitleFontType = kCTFontUIFontWindowTitle;
  kCTFontPushButtonFontType = kCTFontUIFontPushButton;
  kCTFontUtilityWindowTitleFontType = kCTFontUIFontUtilityWindowTitle;
  kCTFontAlertHeaderFontType = kCTFontUIFontAlertHeader;
  kCTFontSystemDetailFontType = kCTFontUIFontSystemDetail;
  kCTFontEmphasizedSystemDetailFontType = kCTFontUIFontEmphasizedSystemDetail;
  kCTFontToolbarFontType = kCTFontUIFontToolbar;
  kCTFontSmallToolbarFontType = kCTFontUIFontSmallToolbar;
  kCTFontMessageFontType = kCTFontUIFontMessage;
  kCTFontPaletteFontType = kCTFontUIFontPalette;
  kCTFontToolTipFontType = kCTFontUIFontToolTip;
  kCTFontControlContentFontType = kCTFontUIFontControlContent;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTFontVariationAxisIdentifierKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisMinimumValueKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisMaximumValueKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisDefaultValueKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontVariationAxisNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontOpenTypeFeatureTag: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCTFontOpenTypeFeatureValue: CFStringRef { available in 10_10, 8_0 }; cvar; external;
  kCTFontFeatureTypeIdentifierKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureTypeNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureTypeExclusiveKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureTypeSelectorsKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorIdentifierKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorNameKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorDefaultKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
  kCTFontFeatureSelectorSettingKey: CFStringRef { available in 10_5, 3_2 }; cvar; external;
{$endif}

{$ifndef ATSFONTREF_DEFINED}
{$ifdef TYPES}
type
  ATSFontRef = UInt32;
  ATSFontRefPtr = ^ATSFontRef;

const
  ATSFONTREF_DEFINED = 1;
{$endif}

{$endif}
{$ifdef TYPES}
const
  kCTFontTableBASE = 'BASE';
  kCTFontTableCFF = 'CFF ';
  kCTFontTableDSIG = 'DSIG';
  kCTFontTableEBDT = 'EBDT';
  kCTFontTableEBLC = 'EBLC';
  kCTFontTableEBSC = 'EBSC';
  kCTFontTableGDEF = 'GDEF';
  kCTFontTableGPOS = 'GPOS';
  kCTFontTableGSUB = 'GSUB';
  kCTFontTableJSTF = 'JSTF';
  kCTFontTableLTSH = 'LTSH';
  kCTFontTableMATH = 'MATH';
  kCTFontTableOS2 = 'OS/2';
  kCTFontTablePCLT = 'PCLT';
  kCTFontTableVDMX = 'VDMX';
  kCTFontTableVORG = 'VORG';
  kCTFontTableZapf = 'Zapf';
  kCTFontTableAcnt = 'acnt';
  kCTFontTableAnkr = 'ankr';
  kCTFontTableAvar = 'avar';
  kCTFontTableBdat = 'bdat';
  kCTFontTableBhed = 'bhed';
  kCTFontTableBloc = 'bloc';
  kCTFontTableBsln = 'bsln';
  kCTFontTableCmap = 'cmap';
  kCTFontTableCvar = 'cvar';
  kCTFontTableCvt = 'cvt ';
  kCTFontTableFdsc = 'fdsc';
  kCTFontTableFeat = 'feat';
  kCTFontTableFmtx = 'fmtx';
  kCTFontTableFpgm = 'fpgm';
  kCTFontTableFvar = 'fvar';
  kCTFontTableGasp = 'gasp';
  kCTFontTableGlyf = 'glyf';
  kCTFontTableGvar = 'gvar';
  kCTFontTableHdmx = 'hdmx';
  kCTFontTableHead = 'head';
  kCTFontTableHhea = 'hhea';
  kCTFontTableHmtx = 'hmtx';
  kCTFontTableHsty = 'hsty';
  kCTFontTableJust = 'just';
  kCTFontTableKern = 'kern';
  kCTFontTableKerx = 'kerx';
  kCTFontTableLcar = 'lcar';
  kCTFontTableLtag = 'ltag';
  kCTFontTableLoca = 'loca';
  kCTFontTableMaxp = 'maxp';
  kCTFontTableMort = 'mort';
  kCTFontTableMorx = 'morx';
  kCTFontTableName = 'name';
  kCTFontTableOpbd = 'opbd';
  kCTFontTablePost = 'post';
  kCTFontTablePrep = 'prep';
  kCTFontTableProp = 'prop';
  kCTFontTableSbit = 'sbit';
  kCTFontTableSbix = 'sbix';
  kCTFontTableTrak = 'trak';
  kCTFontTableVhea = 'vhea';
  kCTFontTableVmtx = 'vmtx';

type
  CTFontTableTag = FourCharCode;
  CTFontTableTagPtr = ^CTFontTableTag;
  CTFontTableOptions = cuint32;
  CTFontTableOptionsPtr = ^CTFontTableOptions;

const
  kCTFontTableOptionNoOptions = 0;
  kCTFontTableOptionExcludeSynthetic = 1 shl 0 deprecated 'in 10_5, 10_8, 3_2, 6_0';
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  kCTBaselineClassRoman: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassIdeographicCentered: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassIdeographicLow: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassIdeographicHigh: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassHanging: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineClassMath: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineReferenceFont: CFStringRef { available in 10_8, 6_0 }; cvar; external;
  kCTBaselineOriginalFont: CFStringRef { available in 10_8, 6_0 }; cvar; external;
{$endif}

{$endif}
