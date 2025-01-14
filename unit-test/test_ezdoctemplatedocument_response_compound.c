#ifndef ezdoctemplatedocument_response_compound_TEST
#define ezdoctemplatedocument_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_response_compound.h"
ezdoctemplatedocument_response_compound_t* instantiate_ezdoctemplatedocument_response_compound(int include_optional);

#include "test_multilingual_ezdoctemplatedocument_name.c"


ezdoctemplatedocument_response_compound_t* instantiate_ezdoctemplatedocument_response_compound(int include_optional) {
  ezdoctemplatedocument_response_compound_t* ezdoctemplatedocument_response_compound = NULL;
  if (include_optional) {
    ezdoctemplatedocument_response_compound = ezdoctemplatedocument_response_compound_create(
      95,
      2,
      5,
      7,
      4,
      ezmax_api_definition__full_ezdoctemplatedocument_response_compound__Company,
      true,
       // false, not to have infinite recursion
      instantiate_multilingual_ezdoctemplatedocument_name(0),
      "Standard Contract",
      "Default",
      "Sale",
      "Real Estate"
    );
  } else {
    ezdoctemplatedocument_response_compound = ezdoctemplatedocument_response_compound_create(
      95,
      2,
      5,
      7,
      4,
      ezmax_api_definition__full_ezdoctemplatedocument_response_compound__Company,
      true,
      NULL,
      "Standard Contract",
      "Default",
      "Sale",
      "Real Estate"
    );
  }

  return ezdoctemplatedocument_response_compound;
}


#ifdef ezdoctemplatedocument_response_compound_MAIN

void test_ezdoctemplatedocument_response_compound(int include_optional) {
    ezdoctemplatedocument_response_compound_t* ezdoctemplatedocument_response_compound_1 = instantiate_ezdoctemplatedocument_response_compound(include_optional);

	cJSON* jsonezdoctemplatedocument_response_compound_1 = ezdoctemplatedocument_response_compound_convertToJSON(ezdoctemplatedocument_response_compound_1);
	printf("ezdoctemplatedocument_response_compound :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_response_compound_1));
	ezdoctemplatedocument_response_compound_t* ezdoctemplatedocument_response_compound_2 = ezdoctemplatedocument_response_compound_parseFromJSON(jsonezdoctemplatedocument_response_compound_1);
	cJSON* jsonezdoctemplatedocument_response_compound_2 = ezdoctemplatedocument_response_compound_convertToJSON(ezdoctemplatedocument_response_compound_2);
	printf("repeating ezdoctemplatedocument_response_compound:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_response_compound_2));
}

int main() {
  test_ezdoctemplatedocument_response_compound(1);
  test_ezdoctemplatedocument_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_response_compound_MAIN
#endif // ezdoctemplatedocument_response_compound_TEST
