/*
 * common_file.h
 *
 * Object representing a file used in a request or response context 
 */

#ifndef _common_file_H_
#define _common_file_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_file_t common_file_t;


// Enum EFILESOURCE for common_file

typedef enum  { ezmax_api_definition__full_common_file_EFILESOURCE_NULL = 0, ezmax_api_definition__full_common_file_EFILESOURCE_Base64, ezmax_api_definition__full_common_file_EFILESOURCE_Url } ezmax_api_definition__full_common_file_EFILESOURCE_e;

char* common_file_e_file_source_ToString(ezmax_api_definition__full_common_file_EFILESOURCE_e e_file_source);

ezmax_api_definition__full_common_file_EFILESOURCE_e common_file_e_file_source_FromString(char* e_file_source);



typedef struct common_file_t {
    char *s_file_name; // string
    char *s_file_url; // string
    char *s_file_base64; //ByteArray
    ezmax_api_definition__full_common_file_EFILESOURCE_e e_file_source; //enum

    int _library_owned; // Is the library responsible for freeing this object?
} common_file_t;

__attribute__((deprecated)) common_file_t *common_file_create(
    char *s_file_name,
    char *s_file_url,
    char *s_file_base64,
    ezmax_api_definition__full_common_file_EFILESOURCE_e e_file_source
);

void common_file_free(common_file_t *common_file);

common_file_t *common_file_parseFromJSON(cJSON *common_fileJSON);

cJSON *common_file_convertToJSON(common_file_t *common_file);

#endif /* _common_file_H_ */

