{ Parsed from PhotosUI.framework (iPhoneOS8.2) PHContentEditingController.h }
{ Created on Fri Mar 20 2:11:15 2015 }


{$ifdef TYPES}
type
  PHContentEditingControllerProtocolPtr = ^PHContentEditingControllerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  PHContentEditingControllerProtocol = objcprotocol external name 'PHContentEditingController' (NSObjectProtocol)
  required
    function canHandleAdjustmentData (adjustmentData: PHAdjustmentData): boolean; message 'canHandleAdjustmentData:';
    procedure startContentEditingWithInput_placeholderImage (contentEditingInput: PHContentEditingInput; placeholderImage: UIImage); message 'startContentEditingWithInput:placeholderImage:';
    procedure finishContentEditingWithCompletionHandler (completionHandler: OpaqueCBlock); message 'finishContentEditingWithCompletionHandler:';
    procedure cancelContentEditing; message 'cancelContentEditing';
    function shouldShowCancelConfirmation: boolean; message 'shouldShowCancelConfirmation';
  end;
{$endif}

