#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportsubsectionpart.h"


char* e_reportsubsectionpart_typecommon_reportsubsectionpart_ToString(ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e e_reportsubsectionpart_type) {
    char* e_reportsubsectionpart_typeArray[] =  { "NULL", "Header", "Body", "Footer" };
	return e_reportsubsectionpart_typeArray[e_reportsubsectionpart_type];
}

ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e e_reportsubsectionpart_typecommon_reportsubsectionpart_FromString(char* e_reportsubsectionpart_type){
    int stringToReturn = 0;
    char *e_reportsubsectionpart_typeArray[] =  { "NULL", "Header", "Body", "Footer" };
    size_t sizeofArray = sizeof(e_reportsubsectionpart_typeArray) / sizeof(e_reportsubsectionpart_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_reportsubsectionpart_type, e_reportsubsectionpart_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

common_reportsubsectionpart_t *common_reportsubsectionpart_create(
    ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e e_reportsubsectionpart_type,
    list_t *a_obj_reportrow
    ) {
    common_reportsubsectionpart_t *common_reportsubsectionpart_local_var = malloc(sizeof(common_reportsubsectionpart_t));
    if (!common_reportsubsectionpart_local_var) {
        return NULL;
    }
    common_reportsubsectionpart_local_var->e_reportsubsectionpart_type = e_reportsubsectionpart_type;
    common_reportsubsectionpart_local_var->a_obj_reportrow = a_obj_reportrow;

    return common_reportsubsectionpart_local_var;
}


void common_reportsubsectionpart_free(common_reportsubsectionpart_t *common_reportsubsectionpart) {
    if(NULL == common_reportsubsectionpart){
        return ;
    }
    listEntry_t *listEntry;
    if (common_reportsubsectionpart->a_obj_reportrow) {
        list_ForEach(listEntry, common_reportsubsectionpart->a_obj_reportrow) {
            common_reportrow_free(listEntry->data);
        }
        list_freeList(common_reportsubsectionpart->a_obj_reportrow);
        common_reportsubsectionpart->a_obj_reportrow = NULL;
    }
    free(common_reportsubsectionpart);
}

cJSON *common_reportsubsectionpart_convertToJSON(common_reportsubsectionpart_t *common_reportsubsectionpart) {
    cJSON *item = cJSON_CreateObject();

    // common_reportsubsectionpart->e_reportsubsectionpart_type
    if (ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_NULL == common_reportsubsectionpart->e_reportsubsectionpart_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eReportsubsectionpartType", e_reportsubsectionpart_typecommon_reportsubsectionpart_ToString(common_reportsubsectionpart->e_reportsubsectionpart_type)) == NULL)
    {
    goto fail; //Enum
    }


    // common_reportsubsectionpart->a_obj_reportrow
    if (!common_reportsubsectionpart->a_obj_reportrow) {
        goto fail;
    }
    cJSON *a_obj_reportrow = cJSON_AddArrayToObject(item, "a_objReportrow");
    if(a_obj_reportrow == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_reportrowListEntry;
    if (common_reportsubsectionpart->a_obj_reportrow) {
    list_ForEach(a_obj_reportrowListEntry, common_reportsubsectionpart->a_obj_reportrow) {
    cJSON *itemLocal = common_reportrow_convertToJSON(a_obj_reportrowListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_reportrow, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_reportsubsectionpart_t *common_reportsubsectionpart_parseFromJSON(cJSON *common_reportsubsectionpartJSON){

    common_reportsubsectionpart_t *common_reportsubsectionpart_local_var = NULL;

    // define the local list for common_reportsubsectionpart->a_obj_reportrow
    list_t *a_obj_reportrowList = NULL;

    // common_reportsubsectionpart->e_reportsubsectionpart_type
    cJSON *e_reportsubsectionpart_type = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionpartJSON, "eReportsubsectionpartType");
    if (!e_reportsubsectionpart_type) {
        goto end;
    }

    ezmax_api_definition__full_common_reportsubsectionpart_EREPORTSUBSECTIONPARTTYPE_e e_reportsubsectionpart_typeVariable;
    
    if(!cJSON_IsString(e_reportsubsectionpart_type))
    {
    goto end; //Enum
    }
    e_reportsubsectionpart_typeVariable = e_reportsubsectionpart_typecommon_reportsubsectionpart_FromString(e_reportsubsectionpart_type->valuestring);

    // common_reportsubsectionpart->a_obj_reportrow
    cJSON *a_obj_reportrow = cJSON_GetObjectItemCaseSensitive(common_reportsubsectionpartJSON, "a_objReportrow");
    if (!a_obj_reportrow) {
        goto end;
    }

    
    cJSON *a_obj_reportrow_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_reportrow)){
        goto end; //nonprimitive container
    }

    a_obj_reportrowList = list_createList();

    cJSON_ArrayForEach(a_obj_reportrow_local_nonprimitive,a_obj_reportrow )
    {
        if(!cJSON_IsObject(a_obj_reportrow_local_nonprimitive)){
            goto end;
        }
        common_reportrow_t *a_obj_reportrowItem = common_reportrow_parseFromJSON(a_obj_reportrow_local_nonprimitive);

        list_addElement(a_obj_reportrowList, a_obj_reportrowItem);
    }


    common_reportsubsectionpart_local_var = common_reportsubsectionpart_create (
        e_reportsubsectionpart_typeVariable,
        a_obj_reportrowList
        );

    return common_reportsubsectionpart_local_var;
end:
    if (a_obj_reportrowList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_reportrowList) {
            common_reportrow_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_reportrowList);
        a_obj_reportrowList = NULL;
    }
    return NULL;

}
