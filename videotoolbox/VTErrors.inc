{ Parsed from VideoToolbox.framework (iPhoneOS8.2) VTErrors.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$ifndef VTERRORS_H}

{$ifdef TYPES}
const
  kVTPropertyNotSupportedErr = -12900;
  kVTPropertyReadOnlyErr = -12901;
  kVTParameterErr = -12902;
  kVTInvalidSessionErr = -12903;
  kVTAllocationFailedErr = -12904;
  kVTPixelTransferNotSupportedErr = -12905;
  kVTCouldNotFindVideoDecoderErr = -12906;
  kVTCouldNotCreateInstanceErr = -12907;
  kVTCouldNotFindVideoEncoderErr = -12908;
  kVTVideoDecoderBadDataErr = -12909;
  kVTVideoDecoderUnsupportedDataFormatErr = -12910;
  kVTVideoDecoderMalfunctionErr = -12911;
  kVTVideoEncoderMalfunctionErr = -12912;
  kVTVideoDecoderNotAvailableNowErr = -12913;
  kVTImageRotationNotSupportedErr = -12914;
  kVTVideoEncoderNotAvailableNowErr = -12915;
  kVTFormatDescriptionChangeNotSupportedErr = -12916;
  kVTInsufficientSourceColorDataErr = -12917;
  kVTCouldNotCreateColorCorrectionDataErr = -12918;
  kVTColorSyncTransformConvertFailedErr = -12919;
  kVTVideoDecoderAuthorizationErr = -12210;
  kVTVideoEncoderAuthorizationErr = -12211;
  kVTColorCorrectionPixelTransferFailedErr = -12212;
  kVTMultiPassStorageIdentifierMismatchErr = -12213;
  kVTMultiPassStorageInvalidErr = -12214;
  kVTFrameSiloInvalidTimeStampErr = -12215;
  kVTFrameSiloInvalidTimeRangeErr = -12216;
  kVTCouldNotFindTemporalFilterErr = -12217;
  kVTPixelTransferNotPermittedErr = -12218;

type
  VTDecodeFrameFlags = cuint32;
  VTDecodeFrameFlagsPtr = ^VTDecodeFrameFlags;

const
  kVTDecodeFrame_EnableAsynchronousDecompression = 1 shl 0;
  kVTDecodeFrame_DoNotOutputFrame = 1 shl 1;
  kVTDecodeFrame_1xRealTimePlayback = 1 shl 2;
  kVTDecodeFrame_EnableTemporalProcessing = 1 shl 3;

type
  VTDecodeInfoFlags = UInt32;
  VTDecodeInfoFlagsPtr = ^VTDecodeInfoFlags;

const
  kVTDecodeInfo_Asynchronous = 1 shl 0;
  kVTDecodeInfo_FrameDropped = 1 shl 1;
  kVTDecodeInfo_ImageBufferModifiable = 1 shl 2;

type
  VTEncodeInfoFlags = UInt32;
  VTEncodeInfoFlagsPtr = ^VTEncodeInfoFlags;

const
  kVTEncodeInfo_Asynchronous = 1 shl 0;
  kVTEncodeInfo_FrameDropped = 1 shl 1;
{$endif}

{$endif}
