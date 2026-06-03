#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_versionhistory_detail.h"



static multilingual_versionhistory_detail_t *multilingual_versionhistory_detail_create_internal(
    char *t_versionhistory_detail1,
    char *t_versionhistory_detail2
    ) {
    multilingual_versionhistory_detail_t *multilingual_versionhistory_detail_local_var = malloc(sizeof(multilingual_versionhistory_detail_t));
    if (!multilingual_versionhistory_detail_local_var) {
        return NULL;
    }
    memset(multilingual_versionhistory_detail_local_var, 0, sizeof(multilingual_versionhistory_detail_t));
    multilingual_versionhistory_detail_local_var->_library_owned = 1;
    multilingual_versionhistory_detail_local_var->t_versionhistory_detail1 = t_versionhistory_detail1;
    multilingual_versionhistory_detail_local_var->t_versionhistory_detail2 = t_versionhistory_detail2;
    return multilingual_versionhistory_detail_local_var;
}

__attribute__((deprecated)) multilingual_versionhistory_detail_t *multilingual_versionhistory_detail_create(
    char *t_versionhistory_detail1,
    char *t_versionhistory_detail2
    ) {
    multilingual_versionhistory_detail_t *result = multilingual_versionhistory_detail_create_internal (
        t_versionhistory_detail1,
        t_versionhistory_detail2
        );
    if (!result) {
    }
    return result;
}

void multilingual_versionhistory_detail_free(multilingual_versionhistory_detail_t *multilingual_versionhistory_detail) {
    if(NULL == multilingual_versionhistory_detail){
        return ;
    }
    if(multilingual_versionhistory_detail->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_versionhistory_detail_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_versionhistory_detail->t_versionhistory_detail1) {
        free(multilingual_versionhistory_detail->t_versionhistory_detail1);
        multilingual_versionhistory_detail->t_versionhistory_detail1 = NULL;
    }
    if (multilingual_versionhistory_detail->t_versionhistory_detail2) {
        free(multilingual_versionhistory_detail->t_versionhistory_detail2);
        multilingual_versionhistory_detail->t_versionhistory_detail2 = NULL;
    }
    free(multilingual_versionhistory_detail);
}

cJSON *multilingual_versionhistory_detail_convertToJSON(multilingual_versionhistory_detail_t *multilingual_versionhistory_detail) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_versionhistory_detail->t_versionhistory_detail1
    if(multilingual_versionhistory_detail->t_versionhistory_detail1) {
    if(cJSON_AddStringToObject(item, "tVersionhistoryDetail1", multilingual_versionhistory_detail->t_versionhistory_detail1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_versionhistory_detail->t_versionhistory_detail2
    if(multilingual_versionhistory_detail->t_versionhistory_detail2) {
    if(cJSON_AddStringToObject(item, "tVersionhistoryDetail2", multilingual_versionhistory_detail->t_versionhistory_detail2) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

multilingual_versionhistory_detail_t *multilingual_versionhistory_detail_parseFromJSON(cJSON *multilingual_versionhistory_detailJSON){

    multilingual_versionhistory_detail_t *multilingual_versionhistory_detail_local_var = NULL;

    char *t_versionhistory_detail1_local_str = NULL;

    char *t_versionhistory_detail2_local_str = NULL;

    // multilingual_versionhistory_detail->t_versionhistory_detail1
    cJSON *t_versionhistory_detail1 = cJSON_GetObjectItemCaseSensitive(multilingual_versionhistory_detailJSON, "tVersionhistoryDetail1");
    if (cJSON_IsNull(t_versionhistory_detail1)) {
        t_versionhistory_detail1 = NULL;
    }
    if (t_versionhistory_detail1) { 
    if(!cJSON_IsString(t_versionhistory_detail1) && !cJSON_IsNull(t_versionhistory_detail1))
    {
    goto end; //String
    }
    }

    // multilingual_versionhistory_detail->t_versionhistory_detail2
    cJSON *t_versionhistory_detail2 = cJSON_GetObjectItemCaseSensitive(multilingual_versionhistory_detailJSON, "tVersionhistoryDetail2");
    if (cJSON_IsNull(t_versionhistory_detail2)) {
        t_versionhistory_detail2 = NULL;
    }
    if (t_versionhistory_detail2) { 
    if(!cJSON_IsString(t_versionhistory_detail2) && !cJSON_IsNull(t_versionhistory_detail2))
    {
    goto end; //String
    }
    }


    if (t_versionhistory_detail1 && !cJSON_IsNull(t_versionhistory_detail1)) t_versionhistory_detail1_local_str = strdup(t_versionhistory_detail1->valuestring);
    if (t_versionhistory_detail2 && !cJSON_IsNull(t_versionhistory_detail2)) t_versionhistory_detail2_local_str = strdup(t_versionhistory_detail2->valuestring);

    multilingual_versionhistory_detail_local_var = multilingual_versionhistory_detail_create_internal (
        t_versionhistory_detail1_local_str,
        t_versionhistory_detail2_local_str
        );

    if (!multilingual_versionhistory_detail_local_var) {
        goto end;
    }

    return multilingual_versionhistory_detail_local_var;
end:
    if (t_versionhistory_detail1_local_str) {
        free(t_versionhistory_detail1_local_str);
        t_versionhistory_detail1_local_str = NULL;
    }
    if (t_versionhistory_detail2_local_str) {
        free(t_versionhistory_detail2_local_str);
        t_versionhistory_detail2_local_str = NULL;
    }
    return NULL;

}
