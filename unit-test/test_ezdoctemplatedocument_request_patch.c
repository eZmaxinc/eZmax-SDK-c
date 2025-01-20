#ifndef ezdoctemplatedocument_request_patch_TEST
#define ezdoctemplatedocument_request_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_request_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_request_patch.h"
ezdoctemplatedocument_request_patch_t* instantiate_ezdoctemplatedocument_request_patch(int include_optional);



ezdoctemplatedocument_request_patch_t* instantiate_ezdoctemplatedocument_request_patch(int include_optional) {
  ezdoctemplatedocument_request_patch_t* ezdoctemplatedocument_request_patch = NULL;
  if (include_optional) {
    ezdoctemplatedocument_request_patch = ezdoctemplatedocument_request_patch_create(
      ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_Docx,
      "a",
      "[B@2fea7088"
    );
  } else {
    ezdoctemplatedocument_request_patch = ezdoctemplatedocument_request_patch_create(
      ezmax_api_definition__full_ezdoctemplatedocument_request_patch_EEZDOCTEMPLATEDOCUMENTFORMAT_Docx,
      "a",
      "[B@2fea7088"
    );
  }

  return ezdoctemplatedocument_request_patch;
}


#ifdef ezdoctemplatedocument_request_patch_MAIN

void test_ezdoctemplatedocument_request_patch(int include_optional) {
    ezdoctemplatedocument_request_patch_t* ezdoctemplatedocument_request_patch_1 = instantiate_ezdoctemplatedocument_request_patch(include_optional);

	cJSON* jsonezdoctemplatedocument_request_patch_1 = ezdoctemplatedocument_request_patch_convertToJSON(ezdoctemplatedocument_request_patch_1);
	printf("ezdoctemplatedocument_request_patch :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_request_patch_1));
	ezdoctemplatedocument_request_patch_t* ezdoctemplatedocument_request_patch_2 = ezdoctemplatedocument_request_patch_parseFromJSON(jsonezdoctemplatedocument_request_patch_1);
	cJSON* jsonezdoctemplatedocument_request_patch_2 = ezdoctemplatedocument_request_patch_convertToJSON(ezdoctemplatedocument_request_patch_2);
	printf("repeating ezdoctemplatedocument_request_patch:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_request_patch_2));
}

int main() {
  test_ezdoctemplatedocument_request_patch(1);
  test_ezdoctemplatedocument_request_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_request_patch_MAIN
#endif // ezdoctemplatedocument_request_patch_TEST
