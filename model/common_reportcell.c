#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportcell.h"



static common_reportcell_t *common_reportcell_create_internal(
    int i_reportcell_columnspan,
    int i_reportcell_rowspan
    ) {
    common_reportcell_t *common_reportcell_local_var = malloc(sizeof(common_reportcell_t));
    if (!common_reportcell_local_var) {
        return NULL;
    }
    common_reportcell_local_var->i_reportcell_columnspan = i_reportcell_columnspan;
    common_reportcell_local_var->i_reportcell_rowspan = i_reportcell_rowspan;

    common_reportcell_local_var->_library_owned = 1;
    return common_reportcell_local_var;
}

__attribute__((deprecated)) common_reportcell_t *common_reportcell_create(
    int i_reportcell_columnspan,
    int i_reportcell_rowspan
    ) {
    return common_reportcell_create_internal (
        i_reportcell_columnspan,
        i_reportcell_rowspan
        );
}

void common_reportcell_free(common_reportcell_t *common_reportcell) {
    if(NULL == common_reportcell){
        return ;
    }
    if(common_reportcell->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportcell_free");
        return ;
    }
    listEntry_t *listEntry;
    free(common_reportcell);
}

cJSON *common_reportcell_convertToJSON(common_reportcell_t *common_reportcell) {
    cJSON *item = cJSON_CreateObject();

    // common_reportcell->i_reportcell_columnspan
    if (!common_reportcell->i_reportcell_columnspan) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportcellColumnspan", common_reportcell->i_reportcell_columnspan) == NULL) {
    goto fail; //Numeric
    }


    // common_reportcell->i_reportcell_rowspan
    if (!common_reportcell->i_reportcell_rowspan) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iReportcellRowspan", common_reportcell->i_reportcell_rowspan) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_reportcell_t *common_reportcell_parseFromJSON(cJSON *common_reportcellJSON){

    common_reportcell_t *common_reportcell_local_var = NULL;

    // common_reportcell->i_reportcell_columnspan
    cJSON *i_reportcell_columnspan = cJSON_GetObjectItemCaseSensitive(common_reportcellJSON, "iReportcellColumnspan");
    if (cJSON_IsNull(i_reportcell_columnspan)) {
        i_reportcell_columnspan = NULL;
    }
    if (!i_reportcell_columnspan) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportcell_columnspan))
    {
    goto end; //Numeric
    }

    // common_reportcell->i_reportcell_rowspan
    cJSON *i_reportcell_rowspan = cJSON_GetObjectItemCaseSensitive(common_reportcellJSON, "iReportcellRowspan");
    if (cJSON_IsNull(i_reportcell_rowspan)) {
        i_reportcell_rowspan = NULL;
    }
    if (!i_reportcell_rowspan) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_reportcell_rowspan))
    {
    goto end; //Numeric
    }


    common_reportcell_local_var = common_reportcell_create_internal (
        i_reportcell_columnspan->valuedouble,
        i_reportcell_rowspan->valuedouble
        );

    return common_reportcell_local_var;
end:
    return NULL;

}
