#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/attachment_get_attachmentlogs_v1_response.h"
#include "../model/common_response_error.h"


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


