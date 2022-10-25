#!/usr/bin/perl -w

# giva a dictionary array
# it is good to first set variable for the desired information
%ec = ();

# load data and count
# if opening file fails, die will print the error message (in the special variable $!) and exit the program
open (IN, "<$ARGV[0]") || die "open $ARGV[0]: $!\n";

while (<IN>) { # when encountering the same element, plus one
        chomp $_;
        $ec{$_}++;
}

close IN;

# sort element by count and output
foreach $e (sort{$ec{$b} <=> $ec{$a}} (keys %ec)) {
        print "$e\t$ec{$e}\n";
}
