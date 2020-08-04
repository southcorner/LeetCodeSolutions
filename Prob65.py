class Solution(object):
    def isNumber(self, s):
        """
        :type s: str
        :rtype: bool
        """
        return re.match("^[+-]?([\d]+(\.[\d]*)?|(\.[\d]+))(e[+-]?[\d]+)?$",s.strip())
