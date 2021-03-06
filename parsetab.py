
# parsetab.py
# This file is automatically generated. Do not edit.
_tabversion = '3.2'

_lr_method = 'LALR'

_lr_signature = '<n\xe1\xaec\xa6r \xca\x1b\xaa\xa1\n\x9d\x15 '
    
_lr_action_items = {'SUB':([0,],[1,]),'VAR':([1,4,5,7,8,9,10,11,12,13,14,17,22,23,24,40,45,46,47,48,49,50,51,52,53,55,56,57,58,69,70,71,72,73,74,75,82,86,],[28,28,28,32,28,28,28,28,37,28,28,28,28,28,28,28,28,60,28,28,28,60,28,28,28,28,28,28,28,-26,-25,-27,28,-24,-29,-28,28,28,]),'ENDSCRIPT':([0,],[3,]),'MUL':([0,],[4,]),'DIV':([0,],[5,]),'GOTO':([0,85,],[13,86,]),'SET':([0,],[7,]),'NEQ':([25,27,28,54,80,81,],[-21,-19,-20,74,-23,-22,]),'GET':([0,],[8,]),')':([25,27,28,80,81,83,],[-21,-19,-20,-23,-22,85,]),'(':([16,],[40,]),']':([50,60,61,],[65,80,81,]),',':([25,26,27,28,29,30,31,32,34,35,39,41,42,43,44,65,80,81,],[-21,45,-19,-20,47,48,49,-20,51,52,53,55,56,57,58,82,-23,-22,]),'BSR':([0,],[9,]),'BSL':([0,],[10,]),'LT':([25,27,28,54,80,81,],[-21,-19,-20,71,-23,-22,]),'GTE':([25,27,28,54,80,81,],[-21,-19,-20,73,-23,-22,]),'IF':([0,],[16,]),'LBL':([0,],[12,]),'$end':([2,3,6,15,18,19,20,21,25,27,28,33,36,37,38,59,62,63,64,66,67,68,76,77,78,79,80,81,84,87,],[-33,-31,-18,0,-32,-30,-35,-34,-21,-19,-20,-6,-4,-3,-5,-9,-10,-11,-1,-15,-16,-8,-13,-17,-14,-12,-23,-22,-2,-7,]),'GT':([25,27,28,54,80,81,],[-21,-19,-20,69,-23,-22,]),'HALT':([0,],[6,]),'ADD':([0,],[14,]),'LTE':([25,27,28,54,80,81,],[-21,-19,-20,70,-23,-22,]),'DEBUG':([0,],[2,]),'[':([28,32,],[46,50,]),'EQ':([25,27,28,54,80,81,],[-21,-19,-20,75,-23,-22,]),'WAIT':([0,],[11,]),'AND':([0,],[17,]),'RUN':([0,],[18,]),'INT':([1,4,5,7,8,9,10,11,13,14,17,22,23,24,40,45,46,47,48,49,50,51,52,53,55,56,57,58,69,70,71,72,73,74,75,82,86,],[27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,61,27,27,27,61,27,27,27,27,27,27,27,-26,-25,-27,27,-24,-29,-28,27,27,]),'SCRIPT':([0,],[19,]),'SYSTEM':([0,],[20,]),'ABORT':([0,],[21,]),'NOT':([0,],[22,]),'OR':([0,],[23,]),'MOD':([0,],[24,]),}

_lr_action = { }
for _k, _v in _lr_action_items.items():
   for _x,_y in zip(_v[0],_v[1]):
      if not _x in _lr_action:  _lr_action[_x] = { }
      _lr_action[_x][_k] = _y
del _lr_action_items

_lr_goto_items = {'cond':([54,],[72,]),'arr':([1,4,5,7,8,9,10,11,13,14,17,22,23,24,40,45,47,48,49,51,52,53,55,56,57,58,72,82,86,],[25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,]),'inst':([0,],[15,]),'val':([1,4,5,7,8,9,10,11,13,14,17,22,23,24,40,45,47,48,49,51,52,53,55,56,57,58,72,82,86,],[26,29,30,31,33,34,35,36,38,39,41,42,43,44,54,59,62,63,64,66,67,68,76,77,78,79,83,84,87,]),}

_lr_goto = { }
for _k, _v in _lr_goto_items.items():
   for _x,_y in zip(_v[0],_v[1]):
       if not _x in _lr_goto: _lr_goto[_x] = { }
       _lr_goto[_x][_k] = _y
del _lr_goto_items
_lr_productions = [
  ("S' -> inst","S'",1,None,None,None),
  ('inst -> SET val , val','inst',4,'p_inst_SET','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',628),
  ('inst -> SET VAR [ ] , val','inst',6,'p_inst_SET','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',629),
  ('inst -> LBL VAR','inst',2,'p_inst_LBL','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',659),
  ('inst -> WAIT val','inst',2,'p_inst_WAIT','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',672),
  ('inst -> GOTO val','inst',2,'p_inst_GOTO','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',677),
  ('inst -> GET val','inst',2,'p_inst_GET','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',682),
  ('inst -> IF ( val cond val ) GOTO val','inst',8,'p_inst_IF','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',687),
  ('inst -> ADD val , val','inst',4,'p_inst_ADD','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',692),
  ('inst -> SUB val , val','inst',4,'p_inst_SUB','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',697),
  ('inst -> MUL val , val','inst',4,'p_inst_MUL','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',702),
  ('inst -> DIV val , val','inst',4,'p_inst_DIV','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',707),
  ('inst -> MOD val , val','inst',4,'p_inst_MOD','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',712),
  ('inst -> AND val , val','inst',4,'p_inst_AND','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',717),
  ('inst -> OR val , val','inst',4,'p_inst_OR','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',722),
  ('inst -> BSR val , val','inst',4,'p_inst_BSR','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',727),
  ('inst -> BSL val , val','inst',4,'p_inst_BSL','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',732),
  ('inst -> NOT val , val','inst',4,'p_inst_NOT','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',737),
  ('inst -> HALT','inst',1,'p_inst_HALT','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',742),
  ('val -> INT','val',1,'p_val_INT','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',746),
  ('val -> VAR','val',1,'p_val_VAR','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',751),
  ('val -> arr','val',1,'p_val_arr','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',755),
  ('arr -> VAR [ INT ]','arr',4,'p_arr_VAR1','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',759),
  ('arr -> VAR [ VAR ]','arr',4,'p_arr_VAR2','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',766),
  ('cond -> GTE','cond',1,'p_cond_ops','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',771),
  ('cond -> LTE','cond',1,'p_cond_ops','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',772),
  ('cond -> GT','cond',1,'p_cond_ops','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',773),
  ('cond -> LT','cond',1,'p_cond_ops','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',774),
  ('cond -> EQ','cond',1,'p_cond_ops','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',775),
  ('cond -> NEQ','cond',1,'p_cond_ops','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',776),
  ('inst -> SCRIPT','inst',1,'p_inst_SCRIPT','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',782),
  ('inst -> ENDSCRIPT','inst',1,'p_inst_ENDSCRIPT','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',786),
  ('inst -> RUN','inst',1,'p_inst_RUN','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',790),
  ('inst -> DEBUG','inst',1,'p_inst_DEBUG','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',794),
  ('inst -> ABORT','inst',1,'p_inst_ABORT','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',798),
  ('inst -> SYSTEM','inst',1,'p_inst_SYSTEM','build/bdist.linux-armv7l/egg/pru_speak/bs_parse.py',802),
]
