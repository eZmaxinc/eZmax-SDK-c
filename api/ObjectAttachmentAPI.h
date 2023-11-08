#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/attachment_download_v1_response.h"
#include "../model/common_response_error.h"


// Retrieve the content
//
// Using this endpoint, you can retrieve the content of an attachment.
//
attachment_download_v1_response_t*
ObjectAttachmentAPI_attachmentDownloadV1(apiClient_t *apiClient, int pkiAttachmentID );


