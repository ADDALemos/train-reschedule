# How to compile the project

`make`

The Makefile allows us to choose the MaxSAT solver to our liking.  To change the default solver ([TT-Open-WBO-INC]) change the variables: SUPERSOLVERNAME and SUPERSOLVERNAMEID.  

# How to run the project

`./timetabler data/PESP/set-01/R1L1.xml -continuous  -clean  [solver options]`



The following options are available:

## Timetabler Options
### Reload from disk previous state of the solver 
```-continuous      (default: on)```
### Smart Clean  
```-clean      (default: on)```

## TT-Open-WBO-INC
### Formula type (0=MaxSAT, 1=PB)
```-formula      = <int32>  [   0 ..    1] (default: 0)```

### Print model
```-print-model, -no-print-model (default on)```

### Write unsatisfied soft clauses to file
```-print-unsat-soft = <output-file>```

### Verbosity level (0=minimal, 1=more)
```-verbosity    = <int32>  [   0 ..    1] (default: 1)```

### Search algorithm (0=wbo,1=linear-su,2=msu3,3=part-msu3,4=oll,5=best)
```-algorithm    = <int32>  [   0 ..    1] (default: 5)```

### BMO search 
```-bmo,-no-bmo (default on)```

### Pseudo-Boolean encodings (0=SWC,1=GTE, 2=Adder)
```-pb           = <int32>  [   0 ..    1] (default: 1)```

### At-most-one encodings (0=ladder)
```-amo          = <int32>  [   0 ..    0] (default: 0)```

### Cardinality encodings (0=cardinality networks, 1=totalizer, 2=modulo totalizer)
```-cardinality  = <int32>  [   0 ..    2] (default: 1)```

       
## WBO Options (algorithm=0, unsatisfiability-based algorithm)
### Weight strategy (0=none, 1=weight-based, 2=diversity-based)
```-weight-strategy = <int32>  [   0 ..    2] (default: 2)```

### Symmetry breaking
```-symmetry, -no-symmetry (default on)```

### Limit on the number of symmetry breaking clauses
```-symmetry-limit = <int32>  [   0 .. imax] (default: 500000)```

## PartMSU3 OPTIONS (algorithm=3, partition-based algorithm)
### Graph type (0=vig, 1=cvig, 2=res)
```-graph-type   = <int32>  [   0 ..    2] (default: 2)```

### Partition strategy (0=sequential, 1=sequential-sorted, 2=binary)
```-partition-strategy = <int32>  [   0 ..    2] (default: 2)```

# Dependencies

c++ compiler.

 [Rapid JSON Parser](https://rapidjson.org/)
 
## Solver:
   
 [TT-Open-WBO-INC](https://drive.google.com/file/d/140d8jDHZHo5d7WuoNpLqZXmHasgYkH38/view)
 
 
  
# Data Sets
   
[PESP benckmark](http://num.math.uni-goettingen.de/~m.goerigk/pesplib/)

[SBB benchmark](https://github.com/potassco/train-scheduling-with-hybrid-asp)
