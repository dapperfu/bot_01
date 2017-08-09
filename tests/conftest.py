import pytest
from uuid import uuid4

@pytest.fixture(scope="module")
def uuid():
	return uuid4()
