import unittest

import basic


class TestBasic(unittest.TestCase):
    def test_slow(self):
        a = basic.SlowType()
        assert a.member[0] == 0
        a.member = [1]
        assert a.member[0] == 1


if __name__ == "__main__":
    unittest.main()
