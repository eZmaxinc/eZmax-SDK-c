#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezdoctemplatedocument_name.h"



static multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name_create_internal(
    char *s_ezdoctemplatedocument_name1,
    char *s_ezdoctemplatedocument_name2
    ) {
    multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name_local_var = malloc(sizeof(multilingual_ezdoctemplatedocument_name_t));
    if (!multilingual_ezdoctemplatedocument_name_local_var) {
        return NULL;
    }
    multilingual_ezdoctemplatedocument_name_local_var->s_ezdoctemplatedocument_name1 = s_ezdoctemplatedocument_name1;
    multilingual_ezdoctemplatedocument_name_local_var->s_ezdoctemplatedocument_name2 = s_ezdoctemplatedocument_name2;

    multilingual_ezdoctemplatedocument_name_local_var->_library_owned = 1;
    return multilingual_ezdoctemplatedocument_name_local_var;
}

__attribute__((deprecated)) multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name_create(
    char *s_ezdoctemplatedocument_name1,
    char *s_ezdoctemplatedocument_name2
    ) {
    return multilingual_ezdoctemplatedocument_name_create_internal (
        s_ezdoctemplatedocument_name1,
        s_ezdoctemplatedocument_name2
        );
}

void multilingual_ezdoctemplatedocument_name_free(multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name) {
    if(NULL == multilingual_ezdoctemplatedocument_name){
        return ;
    }
    if(multilingual_ezdoctemplatedocument_name->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezdoctemplatedocument_name_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name1) {
        free(multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name1);
        multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name1 = NULL;
    }
    if (multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name2) {
        free(multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name2);
        multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name2 = NULL;
    }
    free(multilingual_ezdoctemplatedocument_name);
}

cJSON *multilingual_ezdoctemplatedocument_name_convertToJSON(multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name1
    if(multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name1) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentName1", multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name2
    if(multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name2) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentName2", multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name2) == NULL) {
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

multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name_parseFromJSON(cJSON *multilingual_ezdoctemplatedocument_nameJSON){

    multilingual_ezdoctemplatedocument_name_t *multilingual_ezdoctemplatedocument_name_local_var = NULL;

    // multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name1
    cJSON *s_ezdoctemplatedocument_name1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezdoctemplatedocument_nameJSON, "sEzdoctemplatedocumentName1");
    if (cJSON_IsNull(s_ezdoctemplatedocument_name1)) {
        s_ezdoctemplatedocument_name1 = NULL;
    }
    if (s_ezdoctemplatedocument_name1) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_name1) && !cJSON_IsNull(s_ezdoctemplatedocument_name1))
    {
    goto end; //String
    }
    }

    // multilingual_ezdoctemplatedocument_name->s_ezdoctemplatedocument_name2
    cJSON *s_ezdoctemplatedocument_name2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezdoctemplatedocument_nameJSON, "sEzdoctemplatedocumentName2");
    if (cJSON_IsNull(s_ezdoctemplatedocument_name2)) {
        s_ezdoctemplatedocument_name2 = NULL;
    }
    if (s_ezdoctemplatedocument_name2) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_name2) && !cJSON_IsNull(s_ezdoctemplatedocument_name2))
    {
    goto end; //String
    }
    }


    multilingual_ezdoctemplatedocument_name_local_var = multilingual_ezdoctemplatedocument_name_create_internal (
        s_ezdoctemplatedocument_name1 && !cJSON_IsNull(s_ezdoctemplatedocument_name1) ? strdup(s_ezdoctemplatedocument_name1->valuestring) : NULL,
        s_ezdoctemplatedocument_name2 && !cJSON_IsNull(s_ezdoctemplatedocument_name2) ? strdup(s_ezdoctemplatedocument_name2->valuestring) : NULL
        );

    return multilingual_ezdoctemplatedocument_name_local_var;
end:
    return NULL;

}
