/*
 * custom_attachment_prepare_files_transfer_request.h
 *
 * A AttachmentPrepareFilesTransfer object
 */

#ifndef _custom_attachment_prepare_files_transfer_request_H_
#define _custom_attachment_prepare_files_transfer_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attachment_prepare_files_transfer_request_t custom_attachment_prepare_files_transfer_request_t;




typedef struct custom_attachment_prepare_files_transfer_request_t {
    char *s_attachment_name; // string
    char *s_attachment_md5; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_attachment_prepare_files_transfer_request_t;

__attribute__((deprecated)) custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request_create(
    char *s_attachment_name,
    char *s_attachment_md5
);

void custom_attachment_prepare_files_transfer_request_free(custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request);

custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request_parseFromJSON(cJSON *custom_attachment_prepare_files_transfer_requestJSON);

cJSON *custom_attachment_prepare_files_transfer_request_convertToJSON(custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request);

#endif /* _custom_attachment_prepare_files_transfer_request_H_ */

