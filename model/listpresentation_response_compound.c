#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "listpresentation_response_compound.h"



listpresentation_response_compound_t *listpresentation_response_compound_create(
    char *s_listpresentation_description,
    char *s_listpresentation_filter,
    char *s_listpresentation_orderby,
    list_t *a_s_column_name,
    int i_listpresentation_row_max,
    int i_listpresentation_row_offset,
    int b_listpresentation_default
    ) {
    listpresentation_response_compound_t *listpresentation_response_compound_local_var = malloc(sizeof(listpresentation_response_compound_t));
    if (!listpresentation_response_compound_local_var) {
        return NULL;
    }
    listpresentation_response_compound_local_var->s_listpresentation_description = s_listpresentation_description;
    listpresentation_response_compound_local_var->s_listpresentation_filter = s_listpresentation_filter;
    listpresentation_response_compound_local_var->s_listpresentation_orderby = s_listpresentation_orderby;
    listpresentation_response_compound_local_var->a_s_column_name = a_s_column_name;
    listpresentation_response_compound_local_var->i_listpresentation_row_max = i_listpresentation_row_max;
    listpresentation_response_compound_local_var->i_listpresentation_row_offset = i_listpresentation_row_offset;
    listpresentation_response_compound_local_var->b_listpresentation_default = b_listpresentation_default;

    return listpresentation_response_compound_local_var;
}


void listpresentation_response_compound_free(listpresentation_response_compound_t *listpresentation_response_compound) {
    if(NULL == listpresentation_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (listpresentation_response_compound->s_listpresentation_description) {
        free(listpresentation_response_compound->s_listpresentation_description);
        listpresentation_response_compound->s_listpresentation_description = NULL;
    }
    if (listpresentation_response_compound->s_listpresentation_filter) {
        free(listpresentation_response_compound->s_listpresentation_filter);
        listpresentation_response_compound->s_listpresentation_filter = NULL;
    }
    if (listpresentation_response_compound->s_listpresentation_orderby) {
        free(listpresentation_response_compound->s_listpresentation_orderby);
        listpresentation_response_compound->s_listpresentation_orderby = NULL;
    }
    if (listpresentation_response_compound->a_s_column_name) {
        list_ForEach(listEntry, listpresentation_response_compound->a_s_column_name) {
            free(listEntry->data);
        }
        list_freeList(listpresentation_response_compound->a_s_column_name);
        listpresentation_response_compound->a_s_column_name = NULL;
    }
    free(listpresentation_response_compound);
}

cJSON *listpresentation_response_compound_convertToJSON(listpresentation_response_compound_t *listpresentation_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // listpresentation_response_compound->s_listpresentation_description
    if (!listpresentation_response_compound->s_listpresentation_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sListpresentationDescription", listpresentation_response_compound->s_listpresentation_description) == NULL) {
    goto fail; //String
    }


    // listpresentation_response_compound->s_listpresentation_filter
    if (!listpresentation_response_compound->s_listpresentation_filter) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sListpresentationFilter", listpresentation_response_compound->s_listpresentation_filter) == NULL) {
    goto fail; //String
    }


    // listpresentation_response_compound->s_listpresentation_orderby
    if (!listpresentation_response_compound->s_listpresentation_orderby) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sListpresentationOrderby", listpresentation_response_compound->s_listpresentation_orderby) == NULL) {
    goto fail; //String
    }


    // listpresentation_response_compound->a_s_column_name
    if (!listpresentation_response_compound->a_s_column_name) {
        goto fail;
    }
    
    cJSON *a_s_column_name = cJSON_AddArrayToObject(item, "a_sColumnName");
    if(a_s_column_name == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_column_nameListEntry;
    list_ForEach(a_s_column_nameListEntry, listpresentation_response_compound->a_s_column_name) {
    if(cJSON_AddStringToObject(a_s_column_name, "", (char*)a_s_column_nameListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // listpresentation_response_compound->i_listpresentation_row_max
    if (!listpresentation_response_compound->i_listpresentation_row_max) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iListpresentationRowMax", listpresentation_response_compound->i_listpresentation_row_max) == NULL) {
    goto fail; //Numeric
    }


    // listpresentation_response_compound->i_listpresentation_row_offset
    if (!listpresentation_response_compound->i_listpresentation_row_offset) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iListpresentationRowOffset", listpresentation_response_compound->i_listpresentation_row_offset) == NULL) {
    goto fail; //Numeric
    }


    // listpresentation_response_compound->b_listpresentation_default
    if (!listpresentation_response_compound->b_listpresentation_default) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bListpresentationDefault", listpresentation_response_compound->b_listpresentation_default) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

listpresentation_response_compound_t *listpresentation_response_compound_parseFromJSON(cJSON *listpresentation_response_compoundJSON){

    listpresentation_response_compound_t *listpresentation_response_compound_local_var = NULL;

    // listpresentation_response_compound->s_listpresentation_description
    cJSON *s_listpresentation_description = cJSON_GetObjectItemCaseSensitive(listpresentation_response_compoundJSON, "sListpresentationDescription");
    if (!s_listpresentation_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_listpresentation_description))
    {
    goto end; //String
    }

    // listpresentation_response_compound->s_listpresentation_filter
    cJSON *s_listpresentation_filter = cJSON_GetObjectItemCaseSensitive(listpresentation_response_compoundJSON, "sListpresentationFilter");
    if (!s_listpresentation_filter) {
        goto end;
    }

    
    if(!cJSON_IsString(s_listpresentation_filter))
    {
    goto end; //String
    }

    // listpresentation_response_compound->s_listpresentation_orderby
    cJSON *s_listpresentation_orderby = cJSON_GetObjectItemCaseSensitive(listpresentation_response_compoundJSON, "sListpresentationOrderby");
    if (!s_listpresentation_orderby) {
        goto end;
    }

    
    if(!cJSON_IsString(s_listpresentation_orderby))
    {
    goto end; //String
    }

    // listpresentation_response_compound->a_s_column_name
    cJSON *a_s_column_name = cJSON_GetObjectItemCaseSensitive(listpresentation_response_compoundJSON, "a_sColumnName");
    if (!a_s_column_name) {
        goto end;
    }

    list_t *a_s_column_nameList;
    
    cJSON *a_s_column_name_local;
    if(!cJSON_IsArray(a_s_column_name)) {
        goto end;//primitive container
    }
    a_s_column_nameList = list_createList();

    cJSON_ArrayForEach(a_s_column_name_local, a_s_column_name)
    {
        if(!cJSON_IsString(a_s_column_name_local))
        {
            goto end;
        }
        list_addElement(a_s_column_nameList , strdup(a_s_column_name_local->valuestring));
    }

    // listpresentation_response_compound->i_listpresentation_row_max
    cJSON *i_listpresentation_row_max = cJSON_GetObjectItemCaseSensitive(listpresentation_response_compoundJSON, "iListpresentationRowMax");
    if (!i_listpresentation_row_max) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_listpresentation_row_max))
    {
    goto end; //Numeric
    }

    // listpresentation_response_compound->i_listpresentation_row_offset
    cJSON *i_listpresentation_row_offset = cJSON_GetObjectItemCaseSensitive(listpresentation_response_compoundJSON, "iListpresentationRowOffset");
    if (!i_listpresentation_row_offset) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_listpresentation_row_offset))
    {
    goto end; //Numeric
    }

    // listpresentation_response_compound->b_listpresentation_default
    cJSON *b_listpresentation_default = cJSON_GetObjectItemCaseSensitive(listpresentation_response_compoundJSON, "bListpresentationDefault");
    if (!b_listpresentation_default) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_listpresentation_default))
    {
    goto end; //Bool
    }


    listpresentation_response_compound_local_var = listpresentation_response_compound_create (
        strdup(s_listpresentation_description->valuestring),
        strdup(s_listpresentation_filter->valuestring),
        strdup(s_listpresentation_orderby->valuestring),
        a_s_column_nameList,
        i_listpresentation_row_max->valuedouble,
        i_listpresentation_row_offset->valuedouble,
        b_listpresentation_default->valueint
        );

    return listpresentation_response_compound_local_var;
end:
    return NULL;

}
