#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/attachment_delete_v1_response.h"
#include "../model/attachment_get_attachmentlogs_v1_response.h"
#include "../model/attachment_rename_v1_request.h"
#include "../model/attachment_rename_v1_response.h"
#include "../model/attachment_restore_v1_request.h"
#include "../model/attachment_restore_v1_response.h"
#include "../model/attachment_validate_v1_request.h"
#include "../model/attachment_validate_v1_response.h"
#include "../model/common_response_error.h"
#include "../model/object.h"


// Delete an existing attachment
//
// Te endpoint allows to delete an attachment.
//
attachment_delete_v1_response_t*
ObjectAttachmentAPI_attachmentDeleteV1(apiClient_t *apiClient, int *pkiAttachmentID, object_t *body);


// Retrieve the content
//
// Using this endpoint, you can retrieve the content of an attachment.
//
void
ObjectAttachmentAPI_attachmentDownloadV1(apiClient_t *apiClient, int *pkiAttachmentID);


// Retrieve the Attachmentlogs
//
// Using this endpoint, you can retrieve the Attachmentlogs of an attachment.
//
attachment_get_attachmentlogs_v1_response_t*
ObjectAttachmentAPI_attachmentGetAttachmentlogsV1(apiClient_t *apiClient, int *pkiAttachmentID);


// Rename an attachment
//
// The endpoint allows to change the attachment's file name and category.
//
attachment_rename_v1_response_t*
ObjectAttachmentAPI_attachmentRenameV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_rename_v1_request_t *attachment_rename_v1_request);


// Restore a deleted attachment
//
// The endpoints allows to restore a previously deleted attachment.
//
attachment_restore_v1_response_t*
ObjectAttachmentAPI_attachmentRestoreV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_restore_v1_request_t *attachment_restore_v1_request);


// Validate an existing attachment
//
// This endpoint allows to validate or reject an attachment.
//
attachment_validate_v1_response_t*
ObjectAttachmentAPI_attachmentValidateV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_validate_v1_request_t *attachment_validate_v1_request);


