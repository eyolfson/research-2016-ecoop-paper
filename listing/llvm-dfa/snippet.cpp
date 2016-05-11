void DFAPacketizerEmitter::run(raw_ostream &OS) {
  const State *NewState;
  NewState = &D.newState();
  NewState->stateInfo = NewStateResources;
}
