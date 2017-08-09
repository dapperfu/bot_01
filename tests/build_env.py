import pytest

def uuid_build(uuid):
	print(uuid)
	assert(1==1)

def build_skip():
    pytest.skip("pytest.skip")
