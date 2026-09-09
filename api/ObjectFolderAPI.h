#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/folder_batch_download_v1_request.h"
#include "../model/folder_get_attachments_v1_response.h"
#include "../model/folder_import_into_edm_v1_request.h"
#include "../model/folder_import_into_edm_v1_response.h"


// Download multiples attachments from an Folder
//
binary_t*
ObjectFolderAPI_folderBatchDownloadV1(apiClient_t *apiClient, int *pkiFolderID, folder_batch_download_v1_request_t *folder_batch_download_v1_request);


// Retrieve Folder's attachments
//
folder_get_attachments_v1_response_t*
ObjectFolderAPI_folderGetAttachmentsV1(apiClient_t *apiClient, int *pkiFolderID);


// Import attachments into the Folder
//
folder_import_into_edm_v1_response_t*
ObjectFolderAPI_folderImportIntoEDMV1(apiClient_t *apiClient, int *pkiFolderID, folder_import_into_edm_v1_request_t *folder_import_into_edm_v1_request);


