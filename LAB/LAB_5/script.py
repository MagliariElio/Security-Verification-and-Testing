import angr


p = angr.Project("./lab05_material/executables/crackme2", load_options={"auto_load_libs": False})
es = p.factory.entry_state()
sm = p.factory.simulation_manager(es)
sm.explore(find=0x08048709, avoid=0x0804871e)
# sm.explore(lambda s: b"Bien joue, vous pouvez valider l'epreuve avec le pass :" in s.posix.dumps(1), avoid=0x0804871e)
# il secondo cerca di arrivare all'istruzione che stampa questa stringa evitando di creare delle simulazioni che vadano all'indirizzo specificato
