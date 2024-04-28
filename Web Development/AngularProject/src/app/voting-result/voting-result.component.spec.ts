import { ComponentFixture, TestBed } from '@angular/core/testing';

import { VotingResultComponent } from './voting-result.component';

describe('VotingResultComponent', () => {
  let component: VotingResultComponent;
  let fixture: ComponentFixture<VotingResultComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [VotingResultComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(VotingResultComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
